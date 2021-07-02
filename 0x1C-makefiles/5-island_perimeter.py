#!/usr/bin/python3
"""
    island_perimeter contains the island perimeter function
"""


def island_perimeter(grid):
    """
        Returns the perimeter of the island described in grid.
        Args:
            grid (list): list of lists
        Return:
            perimeter of the island
    """
    wz = 0
    lz = 1
    index_list = []
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] is lz:
                perimeter += 4
                if i > 0 and grid[i][j - 1]:
                    perimeter -= 2
                if j > 0 and grid[i - 1][j]:
                    perimeter -= 2

    return perimeter
