#!/usr/bin/python3
"""Defines a Rectangle class."""


class Rectangle:
    """Creation of a rect."""

    def __init__(self, width=0, height=0):
        """create a new Rectangle.

        Args:
            width (int): The width rectangle.
            height (int): The height  rectangle.
        """
        self.width = width
        self.height = height

    @property
    def width(self):
        """Get and set the width of a rectangle."""
        return self.__width

    @width.setter
    def width(self, value):
        if not isinstance(value, int):
            raise TypeError("width must be an integer")
        if value < 0:
            raise ValueError("width must be >= 0")
        self.__width = value

    @property
    def height(self):
        """Get and set the height of a rectangle."""
        return self.__height

    @height.setter
    def height(self, value):
        if not isinstance(value, int):
            raise TypeError("height must be an integer")
        if value < 0:
            raise ValueError("height must be >= 0")
        self.__height = value
