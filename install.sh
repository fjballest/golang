#!/bin/sh

unset GOROOT GOENV GOPATH GOBIN GORBIN
GOROOT=`pwd`
GOROOT_BOOTSTRAP=/usr/local/go14
PATH=$GOROOT/bin:$PATH
export GOROOT path GOROOT_BOOTSTRAP
cd src
./all.bash

