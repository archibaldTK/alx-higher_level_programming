#!/usr/bin/python3
"""Defints from int."""


class MyInt(int):
    """In"""

    def __eq__(self, value):
        """Overrider."""
        return self.real != value

    def __ne__(self, value):
        """Override !=."""
        return self.real == value
