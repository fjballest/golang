package os

import (
	"errors"
	"time"
	"syscall"
)

type dirInfo struct{}

type File struct {
	fd int
	name string

	dirinfo *dirInfo // nil unless directory being read // used by seek and others
}

type ProcessState {}	// Wait

const (
	PathSeparator     = '/'    // OS-specific path separator
	PathListSeparator = ':' // OS-specific path list separator
	DevNull = "/dev/null"
)

var errBug = errors.New("bug")

var (
	Interrupt Signal = syscall.Note("interrupt")
	Kill      Signal = syscall.Note("kill")
)

func NewFile(fd uintptr, name string) *File { return &File{fd: int(fd), name: name} }
func findProcess(pid int) (p *Process, err error) { return nil, errBug }
func startProcess(name string, argv []string, attr *ProcAttr) (p *Process, err error) { return nil, errBug }
func (p *Process) release() error { return errBug }
func (p *Process) kill() error { return errBug }
func (p *Process) wait() (ps *ProcessState, err error) { return nil, errBug }
func (p *Process) signal(sig Signal) error { return errBug }
func (p *ProcessState) userTime() time.Duration { return 0 }
func (p *ProcessState) systemTime() time.Duration { return 0 }
func (p *ProcessState) String() string { return "exit status" }
func (p *ProcessState) exited() bool { return false }
func (p *ProcessState) success() bool { return false }
func (p *ProcessState) sysUsage() interface{} { return "exit status" }
func (p *ProcessState) sys() interface{} {return "exit status" }

func hostname() (name string, err error) { return "atlantis", nil }

func (f *File) readdir(n int) (fi []FileInfo, err error) { return nil, errBug }
func (file *File) readdirnames(n int) (names []string, err error) { return nil, errBug }
func (f *File) read(b []byte) (n int, err error) { return 0, errBug }
func (f *File) pread(b []byte, off int64) (n int, err error) {return 0, errBug }
func (f *File) write(b []byte) (n int, err error) { return 0, errBug }
func (f *File) pwrite(b []byte, off int64) (n int, err error) { return 0, errBug }
func (f *File) seek(offset int64, whence int) (ret int64, err error) { return 0, errBug }
func epipecheck(file *File, e error) {}
func (f *File) Chmod(mode FileMode) error { return errBug }
func Chmod(name string, mode FileMode) error { return errBug }
func OpenFile(name string, flag int, perm FileMode) (file *File, err error) { return nil, errBug }
func Lstat(name string) (fi FileInfo, err error) { return nil, errBug }
func rename(oldname, newname string) error { return errBug }
func syscallMode(i FileMode) (o uint32) { return uint32(i.Perm()) }
func Stat(name string) (fi FileInfo, err error) { return nil, errBug }
func (f *File) Stat() (fi FileInfo, err error) { return nil, errBug }
func (f *File) Close() error { return errBug }
func Remove(name string) error { return errBug }
func sameFile(fs1, fs2 *fileStat) bool { return false }
func Readlink(name string) (string, error) { return "", errBug }
func TempDir() string { return "" }
func Pipe() (r *File, w *File, err error) { return nil, nil, errBug }

func isExist(err error) bool {
	switch pe := err.(type) {
	case nil:
		return false
	case *PathError:
		err = pe.Err
	case *LinkError:
		err = pe.Err
	}
	return contains(err.Error(), " exists")
}

func isNotExist(err error) bool {
	switch pe := err.(type) {
	case nil:
		return false
	case *PathError:
		err = pe.Err
	case *LinkError:
		err = pe.Err
	}
	return contains(err.Error(), "does not exist") || contains(err.Error(), "not found") ||
		contains(err.Error(), "has been removed") || contains(err.Error(), "no parent")
}

func isPermission(err error) bool {
	switch pe := err.(type) {
	case nil:
		return false
	case *PathError:
		err = pe.Err
	case *LinkError:
		err = pe.Err
	}
	return contains(err.Error(), "permission denied")
}

// contains is a local version of strings.Contains. It knows len(sep) > 1.
func contains(s, sep string) bool {
	n := len(sep)
	c := sep[0]
	for i := 0; i+n <= len(s); i++ {
		if s[i] == c && s[i:i+n] == sep {
			return true
		}
	}
	return false
}

func IsPathSeparator(c uint8) bool {
	return PathSeparator == c
}
