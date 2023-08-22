#!/usr/bin/python3
def uppercase(str):
    if str == '':
        print('')
        return
    result = ''
    for i in str:
        if ord(i) in range(97, 123):
            i = chr(ord(i) - (ord('a') - ord('A')))
        result += i
    print('{}'.format(result))
