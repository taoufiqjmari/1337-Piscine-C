#!/bin/sh

find . \( -type f -or -type d \) | wc -l | sed 's/[[:space:]]//g'
