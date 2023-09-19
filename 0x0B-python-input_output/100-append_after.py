#!/usr/bin/python3
"""Moduleunction append_after"""


def append_after(filename="", search_string="", new_string=""):
    """funcext to a file, after each line,
    """
    with open(filename, "r") as f:
        text = f.readlines()

    with open(filename, "w") as fo:
        s = ""
        for line in text:
            s += line
            if search_string in line:
                s += new_string
        fo.write(s)
