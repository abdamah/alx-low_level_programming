#!/bin/bash
wget -q --output-document=$HOME/nrandom.so https://github.com/abdamah/alx-low_level_programming/tree/main/0x18-dynamic_libraries/nrandom.so?raw=true
export LD_PRELOAD=$HOME/nrandom.so
