#!/bin/python
def strRev (strg):
    if len(strg)==1:
        print strg[-1]
        return 1
    print strg[-1],
    strRev(strg[:-1])
    return 0

def Rev(arr):
    temp = arr[:]
    for i in range(len(arr)):
        temp[-1-i] = arr[i]
    return temp


import sys

n = int(raw_input().strip())
arr = map(int,raw_input().strip().split(' '))

strRev(arr)
a = Rev(arr)
for i in a:
    print i,
