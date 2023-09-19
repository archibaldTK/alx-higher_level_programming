#!/usr/bin/python3
"""def a func"""
import json


def save_to_json_file(my_obj, filename):
    """save an obj as json into a file"""
    with open(filename, 'w', encoding='utf-8') as f:
        f.write(json.dumps(my_obj))
