// +build clive

package runtime


// Stuff needed to make the clive port.

import "unsafe"

const (
	_NSIG   = 1  // number of signals in sigtable array
	active_spin = 4
	active_spin_cnt = 30
)

type sigTabT struct {
	flags int32
	name  string
}

var sigtable = [...]sigTabT {
	/* 0 */ {0, "SIGNONE: no trap"},
}

func mpreinit(mp *m) {}
func minit() {}
func unminit() {}
func initsig() {}
func netpoll(block bool) *g { return nil }
func netpollinited() bool { return false }

func sysAlloc(n uintptr, sysStat *uint64) unsafe.Pointer {return nil}
func sysFree(v unsafe.Pointer, n uintptr, sysStat *uint64) {}
func sysReserve(v unsafe.Pointer, n uintptr, reserved *bool) unsafe.Pointer { return nil }
func sysUnused(v unsafe.Pointer, n uintptr) {}
func sysMap(v unsafe.Pointer, n uintptr, reserved bool, sysStat *uint64) {}
func sysUsed(v unsafe.Pointer, n uintptr) {}

func lock(l *mutex) {}
func unlock(l *mutex) {}
func osyield() {}

func newosproc(mp *m, stk unsafe.Pointer) {}

func noteclear(n *note) {}
func notetsleep(n *note, ns int64) bool { return false }
func notewakeup(n *note) {}
func notetsleepg(n *note, ns int64) bool { return false }
func msigsave(mp *m) {}
func notesleep(n *note) {}
func resetcpuprofiler(hz int32) {}
func sigpanic() {}
func sigenable(sig uint32) {}
func sigdisable(sig uint32) {}
func sigignore(sig uint32) {}
func crash() {}
func sysFault(v unsafe.Pointer, n uintptr) {}

func getRandomData(r []byte) {}

func goenvs() {}
func gogetenv(key string) string { return "" }

var _cgo_setenv unsafe.Pointer   // pointer to C function; used to update the C env
var _cgo_unsetenv unsafe.Pointer // pointer to C function

func exit(sts int) {}

func nanotime() int64 {
	return 0
}
func write(fd uintptr, buf unsafe.Pointer, n int32) int64 {
	return -1
}
func usleep(usec uint32) {}

func osinit() {}

