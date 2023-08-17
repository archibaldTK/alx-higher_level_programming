#!/usr/bin/python3
def print_sorted_dictionary(a_dictionary):
    diction = sorted(a_dictionary.keys())
    for i in diction:
        print('{}: {}'.format(i, a_dictionary[i]))
