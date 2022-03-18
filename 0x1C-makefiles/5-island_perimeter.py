#!/usr/bin/python3
""" Island Perimeter Function
"""


def island_perimeter(grid):
    """ Calculate a perimeter of an island (grid)
        Grid: the list representation of the island
        Return: perimeter
    """

    if grid is None:
        return None

    h = 0
    w = 0
    for row in grid:
        try:
            if (row.index(1) >= 0):
                h = h + 1
        except ValueError:
            pass
    for row in grid:
        w = max(row.count(1), w)

    return (h * 2) + (w * 2)
