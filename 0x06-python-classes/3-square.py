#!/usr/bin/python3
"""Create a sqaure class"""


class Square:
    """Creation of Square template"""

    def __init__(self, size=0):
        """Starts a square instance
        Args:
        size (int): size of the square instance
        """

        if not isinstance(size, int):
            raise TypeError('size must be an integer')
        elif size < 0:
            raise ValueError('size must be >= 0')

        self.__size = size

    def area(self):
        """Calculates area of the suare instance"""
        return self.__size**2
