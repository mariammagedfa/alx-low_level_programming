#!/bin/bash
wget -P /tmp/ https://github.com/mariammagedfa/alx-low_level_programming/main/0x18-dynamic_libraries/dl
export LD_PRELOAD=/tmp/ld.so
