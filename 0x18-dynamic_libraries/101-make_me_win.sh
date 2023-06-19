#!/bin/bash
wget -P .. https://github.com/alx-tools/0x18.c/blob/7869708b060ff8a15c66e8ec6b063b108ed7e5d5/gm
export LD_PRELOAD="$PWD/../gm"
