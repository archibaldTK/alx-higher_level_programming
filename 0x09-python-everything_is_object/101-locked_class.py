#!/usr/bin/python3
"""
File: 101-locked_class.py
Desc: This module contains one  class definition, LockedClass
Author: ArchibaldTK
Date Created: 5 Sep 2023
"""


class LockedClass:
    """
    This class stop the user from dynamically creating new
    instance attributes, except if the new instance attribute
    is called first_name
    """
    __slots__ = ["first_name"]
