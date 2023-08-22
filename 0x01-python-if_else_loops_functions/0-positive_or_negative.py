#!/usr/bin/python3
import random
number = random.randint(-10, 10)

if number == 0:
    adj = 'is zero'
elif number < 0:
    adj = 'is negative'
elif number > 0:
    adj = 'is positive'

print(f'{number} {adj}')
