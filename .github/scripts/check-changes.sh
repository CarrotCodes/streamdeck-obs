#!/bin/bash
set -o xtrace
dirty=$(git ls-files --modified)

if [[ $dirty ]]; then
	echo "================================="
    echo "Files were not formatted properly"
    echo "$dirty"
    echo "================================="
    exit 1
fi