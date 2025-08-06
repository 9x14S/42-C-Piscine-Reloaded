#!/bin/sh

find . -name '*.sh' -exec /usr/bin/basename -s '.sh' '{}' \;
