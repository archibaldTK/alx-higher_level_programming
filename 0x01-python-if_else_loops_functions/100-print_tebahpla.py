#!/usr/bin/python3
count = 0
for i in range(122, 97 - 1, -1):
    print("{}".format(chr(i - count)), end="")
    if count == 0:
        count = 32
    else:
        count = 0
