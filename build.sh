#!/bin/sh

set -xe

cc -o streverse src/*.c
./streverse
