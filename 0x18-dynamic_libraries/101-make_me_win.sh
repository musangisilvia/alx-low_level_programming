#!/bin/bash
gcc *.o -shared -o 4lib.so
LD_PRELOAD=$PWD/4lib.so
