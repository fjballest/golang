#!/bin/sh

unset GOROOT GOENV GOPATH GOBIN GORBIN
GOROOT=/usr/local/go
GOROOT_BOOTSTRAP=/usr/local/go14
PATH=$GOROOT/bin:$PATH
export GOROOT path GOROOT_BOOTSTRAP
cd /usr/local/go/src
./all.bash

