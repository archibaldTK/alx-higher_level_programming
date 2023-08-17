#!/usr/bin/python3
def roman_to_int(roman_string):
    num = 0
    if roman_string is None or not isinstance(roman_string, str):
        return 0
    roman_dict = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500,
                  'M': 1000}

    for i, c in enumerate(roman_string):
        if c in roman_dict.keys() and i < len(roman_string) - 1:
            if (roman_dict[c] >= roman_dict[roman_string[i+1]]):
                num += roman_dict[c]
            else:
                num -= roman_dict[c]
        else:
            num += roman_dict[c]
    return num
