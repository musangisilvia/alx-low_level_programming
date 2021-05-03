#!/bin/bash
gcc *.c -shared -o slib.so
LD_PRELOAD=$PWD/slib.so
