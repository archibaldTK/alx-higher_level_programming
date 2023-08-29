#!/usr/bin/python3
"""Create a Square class"""


class Square:
    """Square class"""

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
