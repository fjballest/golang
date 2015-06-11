package runtime

// Stuff needed to make the clive port.

import "unsafe"

func mpreinit(mp *m) {}
func minit() {}
func initsig() {}
func netpoll(block bool) *g { return nil }

func sysAlloc(n uintptr, sysStat *uint64) unsafe.Pointer {return nil}
func sysFree(v unsafe.Pointer, n uintptr, sysStat *uint64) {}
func sysReserve(v unsafe.Pointer, n uintptr, reserved *bool) unsafe.Pointer { return nil }
func sysUnused(v unsafe.Pointer, n uintptr) {}

func lock(l *mutex) {}
func unlock(l *mutex) {}
func osyield() {}

func noteclear(n *note) {}
func notesleep(n *note) {}
func notetsleep(n *note, ns int64) {}
func notewakeup(n *note) {}
func notetsleepg(n *note, ns int64) bool { return false }
func sigpanic() {}
func crash() {}
func sysFault(v unsafe.Pointer, n uintptr) {}

func getRandomData(r []byte) {}

func goenvs() {}
func gogetenv(key string) string { return "" }
