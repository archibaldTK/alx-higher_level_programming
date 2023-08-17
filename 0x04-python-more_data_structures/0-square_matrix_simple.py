#!/usr/bin/python3
def square_matrix_simple(matrix=[]):
    if len(matrix) == 0:
        return []
    return [[x**2 for x in i] for i in matrix]
