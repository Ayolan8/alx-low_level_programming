#!/bin/bash

num=$(LD_PRELOAD=./override.so shuf -i 1-75 -n 5 | sort -n)
bonus=$(LD_PRELOAD=./override.so shuf -i 1-15 -n 1)
echo "$num $bonus"
