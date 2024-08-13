#!/bin/bash

#1
#xdddddddddddddddddddd
# git log | grep "commit " | sed "s/commit //g" | head -5

git log --format="%H" -n 5
