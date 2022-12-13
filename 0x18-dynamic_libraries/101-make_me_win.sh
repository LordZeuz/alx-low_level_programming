#!/bin/bash
wget -P /tmp https://github.com/LordZeuz/alx-low_level_programming/raw/main/0x18-dynamic_libraries/bypass.so
export LD_PRELOAD=/tmp/bypass.so
