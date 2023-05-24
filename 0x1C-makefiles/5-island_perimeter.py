#!/usr/bin/python3
"""a module to evaluate an island"""


def island_perimeter(grid):
    """calculate the perimeter of an island"""
    length = len(grid) - 2
    width = len(grid[0]) - 2
    perimeter = length * width
    if perimeter < 0:
        return
    else:
        return perimeter
