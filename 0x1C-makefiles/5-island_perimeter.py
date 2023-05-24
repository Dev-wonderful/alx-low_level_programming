#!/usr/bin/python3
"""a module to evaluate an island"""


def island_perimeter(grid):
    """calculate the perimeter of an island"""
    height = len(grid) - 2
    width = len(grid[0]) - 2
    if height > 100 or width > 100:
        return
    perimeter = height * width
    if perimeter < 0:
        return 0
    else:
        return perimeter
