package runtime_test

import (
	"testing"
	"fmt"
)

// If you get a syntax error here, most of this package won't compile.
// It means that you are not using the lsub compiler or that you are not using
// the lsub src/go/... packages to parse Go sources.
// We changed the syntax, as you probably know.
type funPoint {		// it's 'struct {...}' implicitly
	x, y int
	xc  chan {}	// it's interface{} implicictly
	xc2 chan<- <-chan {}
}
func funFunc(bar struct{}, bar2 chan {}, bar3 chan<- {}) {
}


func fn() bool {
	return true
}


func TestChanSendVals(t *testing.T) {
	x := 0
	c := make(chan int, 1)
	foo := c <- 1
	if foo != true {
		t.Fatal("could not send")
	}
	close(c)
	foo = c <- x+1
	if foo != false {
		t.Fatal("could send")
	}
	foo = c <- 1
	if foo != false {
		t.Fatal("could send")
	}

	n := 0
	for x := range c {
		n++
		if x != 1 {
			t.Fatal("wrong value")
		}
	}
	if n != 1 {
		t.Fatal("wrong number of sends")
	}

	select {
	case c <- 1:
		// ok
	default:
		t.Fatal("select did block on closed chan")
	}
	c2 := make(chan bool)
	select {
	case c <- 1:
		// ok
	case <-c2:
		t.Fatal("select is broken")
	default:
		t.Fatal("select did block on closed chan")
	}

	select {
	case ok := c <- 1:
		if ok {
			t.Fatal("selsend gave bad ok")
		}
	}

	select {
	case ok := c <- 1:
		if ok {
			t.Fatal("selsend gave bad ok")
		}
	default:
		t.Fatal("select did block on closed chan")
	}

	select {
	case ok := c <- 1:
		if ok {
			t.Fatal("selsend gave bad ok")
		}
	case <-c2:
		t.Fatal("select is broken")
	default:
		t.Fatal("select did block on closed chan")
	}

	c = make(chan int, 3)
	select {
	case ok := c <- 1:
		if !ok {
			t.Fatal("selsend gave bad ok")
		}
	}

	select {
	case ok := c <- 1:
		if !ok {
			t.Fatal("selsend gave bad ok")
		}
	default:
		t.Fatal("select did block on closed chan")
	}

	select {
	case ok := c <- 1:
		if !ok {
			t.Fatal("selsend gave bad ok")
		}
	case <-c2:
		t.Fatal("select is broken")
	default:
		t.Fatal("select did block on closed chan")
	}
	close(c)
	n = 0
	for x := range c {
		n++
		if x != 1 {
			t.Fatal("wrong value")
		}
	}
	if n != 3 {
		t.Fatal("wrong number of sends")
	}

}

func TestDoSelects(t *testing.T) {
	c1 := make(chan int, 3)
	for i := 0; i < 3 ; i++ {
		c1 <- 10+i
	}
	c2 := make(chan int, 5)
	for i := 0; i < 5 ; i++ {
		c2 <- 20+i
	}
	close(c1)
	close(c2)
	var c1s, c2s []int
	doselect {
	case x, ok := <-c1:
		var i int
		for i = 0; i < 30; i++ {
			if i == 4 {
				continue
			}
			if i == 4 {
				t.Fatal("continue broken")
			}
			if i == 10 {
				break
			}
		}
		if i != 10 {
			t.Fatal("break broken")
		}
		if !ok {
			if c2 == nil {
				break
			}
			c1 = nil
			t.Log("c1 done")
			continue
		}
		c1s = append(c1s, x)
		t.Log(x)
	case x, ok := <-c2:
		if !ok {
			if c1 == nil {
				break
			}
			c2 = nil
			t.Log("c2 done")
			continue
		}
		c2s = append(c2s, x)
		t.Log(x)
	}
	c1out := fmt.Sprintf("%v", c1s)
	c2out := fmt.Sprintf("%v", c2s)
	t.Log("done")
	t.Log(c1out)
	t.Log(c2out)
	if c1out != `[10 11 12]` || c2out != `[20 21 22 23 24]` {
		t.Fatal("wrong output")
	}

	c1 = make(chan int, 3)
	for i := 0; i < 3 ; i++ {
		c1 <- 10+i
	}
	c2 = make(chan int, 5)
	for i := 0; i < 5 ; i++ {
		c2 <- 20+i
	}
	close(c1)
	close(c2)
	tot1, tot2 := 0, 0
	doselect c1 != nil || c2 != nil {
	case x, ok := <-c1:
		if !ok {
			c1 = nil
			continue
		}
		tot1++
		t.Log(x)
	case x, ok := <-c2:
		if !ok {
			c2 = nil
			continue
		}
		tot2++
		t.Log(x)
	}
	t.Log("tot", tot1, " ", tot2)
	if tot1 != 3 || tot2 != 5 {
		t.Fatal("wrong totals")
	}
}

