#!/usr/bin/python3
"""def func"""
import json


def load_from_json_file(filename):
    """json to obj"""
    with open(filename, encoding='utf-8') as f:
        return json.load(f)
