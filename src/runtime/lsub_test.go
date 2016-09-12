package runtime_test

import (
	"time"
	"testing"
	"errors"
	"runtime"
)

func TestAppId(t *testing.T) {
	if runtime.GoId() == 0 {
		t.Fatal("no app id in current process")
	}
	appid := runtime.NewApp()
	t.Logf("appid %v\n", appid)
	if runtime.GoId() != runtime.AppId() {
		t.Fatal("bad id after new app")
	}
	ic := make(chan int64, 3)
	go func() {
		ic <- runtime.AppId()
		ic <- runtime.GoId()
		runtime.NewApp()
		ic <- runtime.AppId()
	}()
	oid := <-ic
	if oid != runtime.AppId() {
		t.Fatal("bad app id in new process")
	}
	nid := <-ic
	napp := <-ic
	t.Logf("new appid %v\n", napp)
	if nid != napp {
		t.Fatal("bad new app id")
	}
	if napp == oid {
		t.Fatal("newapp didn't change the app id")
	}
	if appid != runtime.AppId() {
		t.Fatal("appid changed")
	}
}

// nemo: test that chans behave as expected in clive.
func TestChanClose(t *testing.T) {
	tc := make(chan int, 1)
	tc <- 1
	r1, r2 := -1, -1
	close(tc)
	go func() {
		r1 = <-tc
		r2 = <-tc
	}()
	time.Sleep(time.Millisecond)
	if r1 != 1 || r2 != 0 {
		t.Fatal("closed receive")
	}
	t.Log("sending to closed chan ok")

	// these should not panic
	tc <- 3
	close(tc)
	t.Log("not panicing on closed chan ok")
	select {
	case tc <- 5:
		t.Log("select nbsend on closed chan ok")
	default:
		t.Fatal("nbselect sending to closed chan")
	}
	select {
	case <-tc:
		t.Log("select nbrecv on closed chan ok")
	default:
		t.Fatal("nbselect receiving from closed chan")
	}
	tc2 := make(chan int)
	ok := false
	select {
	case tc <- 5:
		t.Log("send ok")
		ok = true
	case tc2 <- 0:
	case <-time.After(time.Millisecond):
		t.Fatal("select send to closed chan blocks")
	}
	if !ok {
		t.Fatal("select send on closed chan")
	}
	n := -1
	select {
	case n = <-tc:
		if n != 0 {
			t.Fatal("recv on closed chan")
		}
		t.Log("recv ok")
	case tc2 <- 0:
	case <-time.After(time.Millisecond):
		t.Fatal("select recv to closed chan blocks")
	}
	if n != 0 {
		t.Fatal("select recv on closed chan")
	}
}

// nemo: test that deferred close still works
func TestChanCloseDefer(t *testing.T) {
	c := make(chan int, 1)
	func() {
		defer close(c)
		c <- 1
	}()
	r1, r2 := -1, -1
	go func() {
		r1 = <-c
		r2 = <-c
	}()
	time.Sleep(time.Millisecond)
	if r1 != 1 || r2 != 0 {
		t.Fatal("deferred close receive")
	}
	t.Log("deferred close ok")
	
}

// nemo: test that deferred close still works when given an error
func TestChanCloseDeferErr(t *testing.T) {
	c := make(chan int, 1)
	func() {
		defer close(c, "oops")
		c <- 1
	}()
	r1, r2 := -1, -1
	go func() {
		r1 = <-c
		r2 = <-c
	}()
	time.Sleep(time.Millisecond)
	if r1 != 1 || r2 != 0 {
		t.Fatal("deferred close receive")
	}
	if cerror(c) == nil || cerror(c).Error() != "oops" {
		t.Fatal("error is not oops")
	}
	t.Logf("deferred close ok with err %s", cerror(c))
	
}

// nemo: test that errors are ok in close
func TestChanCloseErr(t *testing.T) {
	c0 := make(chan bool)
	close(c0)
	if cerror(c0) != nil {
		t.Fatal("chan has cerror")
	}
	if !cclosed(c0) {
		t.Fatal("chan is not cclosed")
	}

	c := make(chan int, 1)
	e0 := cerror(c)
	if e0 != nil {
		t.Fatal("chan has error")
	}
	if cclosed(c) {
		t.Fatal("chan is cclosed")
	}
	close(c, "str error")
	if !cclosed(c) {
		t.Fatal("chan is not cclosed")
	}
	r1, r2 := -1, -1
	go func() {
		r1 = <-c
		r2 = <-c
	}()
	time.Sleep(time.Millisecond)
	if r1 != 0 || r2 != 0 {
		t.Fatal("close receive")
	}
	e := cerror(c)
	t.Logf("cerror is %T %s", e, e)
	if e == nil || e.Error() != "str error" {
		t.Fatal("wrong error")
	}

	c2 := make(chan int, 1)
	close(c2, errors.New("err error"))
	r1, r2 = -1, -1
	go func() {
		r1 = <-c2
		r2 = <-c2
	}()
	time.Sleep(time.Millisecond)
	if r1 != 0 || r2 != 0 {
		t.Fatal("close receive")
	}
	e = cerror(c2)
	t.Logf("cerror is %T %s", e, e)
	if e == nil || e.Error() != "err error" {
		t.Fatal("wrong error")
	}
}

// nemo: test that errors other than string and error do panic
func TestChanCloseIntErr(t *testing.T) {
	c3 := make(chan bool)
	didpanic := false
	func() {
		defer func() {
			if x := recover(); x != nil {
				t.Logf("close paniced with %v", x)
				didpanic = true
				return
			}
		}()
		close(c3, 3)
	}()
	if false && !didpanic {
		t.Fatal("close did not panic with int error")
	}
	t.Log("close accepts only str and error as it should");
}


