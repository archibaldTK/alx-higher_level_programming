#!/usr/bin/python3
"""define func"""


def append_write(filename="", text=""):
    """file"""
    with open(filename, 'a', encoding='utf-8') as f:
        return f.write(text)
