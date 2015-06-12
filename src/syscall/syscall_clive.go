package syscall

var errBug = ErrorString("bug")

type ErrorString string
func (e ErrorString) Error() string { return string(e) }

type Timeval struct {
	Sec  int32
	Usec int32
}

type Timespec struct {
	Sec  int64
	Nsec int64
}

type SysProcAttr struct {}


const (
	O_RDONLY                          = 0x0
	O_WRONLY                          = 0x1
	O_RDWR                            = 0x2
	O_APPEND                          = 0x8
	O_SYNC                            = 0x80
	O_CREAT                           = 0x200
	O_TRUNC                           = 0x400
	O_EXCL                            = 0x800

	ImplementsGetwd = false

	SIGTERM = Note("term")
	SIGUSR1 = Note("usr1")
)

// A Note is a string describing a process note.
// It implements the os.Signal interface.
type Note string

func (n Note) Signal() {}

func (n Note) String() string {
	return string(n)
}

var (
	EINVAL       = ErrorString("bad arg in system call")
	EISDIR       = ErrorString("file is a directory")
	ENAMETOOLONG = ErrorString("file name too long")
	ENOTDIR      = ErrorString("not a directory")
	ECLIVE      = ErrorString("go get a zx spectrum with 48K")
	Stdin  = 0	// os/file.go calls NewFile(Stdin)... to init os.Stdin...
	Stdout = 1
	Stderr = 2
)

func Getenv(key string) (value string, found bool) { return "", false }
func Setenv(key, value string) error { return errBug }
func Unsetenv(key string) error { return errBug }
func Clearenv() { }
func Environ() []string { return nil }
func Getpid() (pid int) { return 0 }
func Getppid() (ppid int) { return 0 }
func Mkdir(path string, mode uint32) (err error) { return errBug }
func Chdir(path string) (err error) { return errBug }
func Fchdir(fd int) (err error) { return errBug }
func Getwd() (wd string, err error) { return "/", nil }
func Getuid() (uid int)   { return -1 }
func Geteuid() (euid int) { return -1 }
func Getgid() (gid int)   { return -1 }
func Getegid() (egid int) { return -1 }
func Getgroups() (gids []int, err error) {
	return make([]int, 0), nil
}
func Getpagesize() int { return 0x1000 }

// Implemented in assembly to import from runtime.
func exit(code int)

func Exit(code int) { exit(code) }
func Mkfifo(path string, mode uint32) (err error) { return errBug }
