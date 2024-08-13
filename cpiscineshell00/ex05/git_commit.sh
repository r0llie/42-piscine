#!/bin/bash

#1
git log | grep "commit " | sed "s/commit //g" | head -5
