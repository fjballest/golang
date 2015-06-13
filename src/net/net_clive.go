// +build clive

package net

import (
	"errors"
	"time"
	"syscall"
	"os"
)

// TCPConn is an implementation of the Conn interface for TCP network
// connections.
type TCPConn struct {
	conn
}
// UDPConn is the implementation of the Conn and PacketConn interfaces
// for UDP network connections.
type UDPConn struct {
	conn
}

var errBug = errors.New("bug")

type netFD struct {
	dir          string	// used for errors
	laddr, raddr Addr	// used for errors
	net          string	// used for errors
}

// TCPListener is a TCP network listener.  Clients should typically
// use variables of type Listener instead of assuming TCP.
type TCPListener struct {
}

func sysInit() {}
func probeIPv4Stack() bool { return false }
func probeIPv6Stack() (bool, bool) { return false, false }

func lookupProtocol(name string) (proto int, err error) { return 0, errBug }
func dial(net string, ra Addr, dialer func(time.Time) (Conn, error), deadline time.Time) (c Conn, err error) {
	err = errBug
	return
}
func setKeepAlive(fd *netFD, keepalive bool) error { return errBug }
func setKeepAlivePeriod(fd *netFD, d time.Duration) error { return errBug }
func DialTCP(net string, laddr, raddr *TCPAddr) (*TCPConn, error) {
	return dialTCP(net, laddr, raddr, noDeadline)
}
func dialTCP(net string, laddr, raddr *TCPAddr, deadline time.Time) (*TCPConn, error) {
	return nil, errBug
}
func DialUDP(net string, laddr, raddr *UDPAddr) (*UDPConn, error) {
	return dialUDP(net, laddr, raddr, noDeadline)
}
func dialUDP(net string, laddr, raddr *UDPAddr, deadline time.Time) (*UDPConn, error) {
	return nil, errBug
}
func maxListenerBacklog() int {
	return 5
}
func fileListener(f *os.File) (Listener, error) {
	return nil, errBug
}
// ListenTCP announces on the TCP address laddr and returns a TCP
// listener.  Net must be "tcp", "tcp4", or "tcp6".  If laddr has a
// port of 0, ListenTCP will choose an available port.  The caller can
// use the Addr method of TCPListener to retrieve the chosen address.
func ListenTCP(net string, laddr *TCPAddr) (*TCPListener, error) {
	return nil, errBug
}
// ListenUDP listens for incoming UDP packets addressed to the local
// address laddr.  Net must be "udp", "udp4", or "udp6".  If laddr has
// a port of 0, ListenUDP will choose an available port.
// The LocalAddr method of the returned UDPConn can be used to
// discover the port.  The returned connection's ReadFrom and WriteTo
// methods can be used to receive and send UDP packets with per-packet
// addressing.
func ListenUDP(net string, laddr *UDPAddr) (*UDPConn, error) {
	return nil, errBug
}

func fileConn(f *os.File) (c Conn, err error) {
	err = errBug
	return
}
func filePacketConn(f *os.File) (c PacketConn, err error) {
	err = errBug
	return
}
// ReadFrom implements the PacketConn ReadFrom method.
func (c *UDPConn) ReadFrom(b []byte) (int, Addr, error) {
	return 0, nil, &OpError{Op: "read", Net: c.fd.dir, Source: c.fd.laddr, Addr: c.fd.raddr, Err: syscall.ECLIVE}
}
// ReadFrom implements the PacketConn ReadFrom method.
func (c *TCPConn) ReadFrom(b []byte) (int, Addr, error) {
	return 0, nil, &OpError{Op: "read", Net: c.fd.dir, Source: c.fd.laddr, Addr: c.fd.raddr, Err: syscall.ECLIVE}
}
// WriteTo implements the PacketConn WriteTo method.
func (c *UDPConn) WriteTo(b []byte, addr Addr) (int, error) {
	return 0, &OpError{Op: "write", Net: c.fd.dir, Source: c.fd.laddr, Addr: addr, Err: syscall.ECLIVE}
}

// WriteTo implements the PacketConn WriteTo method.
func (c *TCPConn) WriteTo(b []byte, addr Addr) (int, error) {
	return 0, &OpError{Op: "write", Net: c.fd.dir, Source: c.fd.laddr, Addr: addr, Err: syscall.ECLIVE}
}
func (c *TCPConn) CloseWrite() error {
	return errBug
}
func socketConn(f *os.File, sa SocketAddr) (Conn, error) {
	return nil, syscall.ECLIVE
}

func socketPacketConn(f *os.File, sa SocketAddr) (PacketConn, error) {
	return nil, syscall.ECLIVE
}

func (l *TCPListener) Accept() (c Conn, err error) {
	return nil, syscall.ECLIVE
}
func (l *TCPListener) AcceptTCP() (*TCPConn, error) {
	return nil, syscall.ECLIVE
}
func (c *TCPConn) SetKeepAlive(keepalive bool) error {
	return syscall.ECLIVE
}
func (c *TCPConn) SetKeepAlivePeriod(d time.Duration) error {
	return syscall.ECLIVE
}
func (l *TCPListener) Addr() Addr { return nil }
func (l *TCPListener) Close() error { return syscall.ECLIVE }
func interfaceAddrTable(ifi *Interface) ([]Addr, error) { return nil, syscall.ECLIVE }
func interfaceMulticastAddrTable(ifi *Interface) ([]Addr, error) { return nil, syscall.ECLIVE }
func interfaceTable(ifindex int) ([]Interface, error) { return nil, syscall.ECLIVE }
func lookupHost(host string) (addrs []string, err error) { return nil, syscall.ECLIVE }
func lookupIP(host string) (addrs []IPAddr, err error) { return nil, syscall.ECLIVE }
func lookupPort(network, service string) (port int, err error) { return 0, syscall.ECLIVE }
func lookupCNAME(name string) (cname string, err error) {return "", syscall.ECLIVE}
func lookupSRV(service, proto, name string) (cname string, addrs []*SRV, err error) {
	return "", nil, syscall.ECLIVE
}
func lookupMX(name string) (mx []*MX, err error) { return nil, syscall.ECLIVE }
func lookupNS(name string) (ns []*NS, err error) { return nil, syscall.ECLIVE }
func lookupTXT(name string) (txt []string, err error) { return nil, syscall.ECLIVE }
func lookupAddr(addr string) (name []string, err error) { return nil, syscall.ECLIVE }

func (fd *netFD) Read(b []byte) (n int, err error) {
	return 0, syscall.ECLIVE
}
func (fd *netFD) Write(b []byte) (n int, err error) {
	return 0, syscall.ECLIVE
}
func (fd *netFD) Close() error {
	return syscall.ECLIVE
}
func (fd *netFD) setDeadline(t time.Time) error {
	return syscall.ECLIVE
}
func (fd *netFD) setReadDeadline(t time.Time) error {
	return syscall.ECLIVE
}

func (fd *netFD) setWriteDeadline(t time.Time) error {
	return syscall.ECLIVE
}

func setReadBuffer(fd *netFD, bytes int) error {
	return syscall.ECLIVE
}

func setWriteBuffer(fd *netFD, bytes int) error {
	return syscall.ECLIVE
}

func (fd *netFD) dup() (*os.File, error) {
	return nil, syscall.ECLIVE
}
