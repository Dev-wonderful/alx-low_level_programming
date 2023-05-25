#!/usr/bin/python3
"""a module to evaluate an island"""


def island_perimeter(grid):
    """calculate the perimeter of an island"""
    lake = True
    if lake and len(grid) > 2 and len(grid[0]) > 2:
        island = grid[1:-1]
        length = len(island)
        border1 = grid[1]
        border2 = grid[-2]
        border3 = [island[i][1] for i in range(length)]
        border4 = [island[i][-2] for i in range(length)]
        border = border1[1:-1] + border2[1:-1] + border3 + border4
        for cell in border:
            if cell == 0:
                lake = False
                break
        if lake:
            return 0
    height = len(grid) - 2
    width = len(grid[0]) - 2
    if height > 100 or width > 100:
        return
    perimeter = height * width
    if perimeter < 0:
        return 0
    else:
        return perimeter
