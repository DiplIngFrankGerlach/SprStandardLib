#!/bin/bash
echo $1
if test -f $1; then
    if test -f $SPR_VERGLEICHER_VERZ/$1; then
        diff -w $1 $SPR_VERGLEICHER_VERZ/$1
    fi
fi
