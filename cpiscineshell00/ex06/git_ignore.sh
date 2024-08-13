#!/bin/bash


repodir=$(git rev-parse --show-toplevel)

#Can use --ignored but it only shows what included in .gitignored
git -C $repodir ls-files --others
