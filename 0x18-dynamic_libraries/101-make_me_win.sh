#!/bin/bash
gcc *.o -shared -o slib.so
LD_PRELOAD=$PWD/slib.so
