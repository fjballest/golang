// +build clive

package time

import (
	"errors"
)

var errBug = errors.New("bug")

func initLocal() {}
func loadLocation(name string) (*Location, error) { return nil, errBug }
func readFile(name string) ([]byte, error) { return nil, errBug }
func open(name string) (uintptr, error) { return 0, errBug }
func closefd(fd uintptr) {}
func preadn(fd uintptr, buf []byte, off int) error { return errBug }
