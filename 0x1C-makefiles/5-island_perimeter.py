#!/usr/bin/python3
"""Create a function to measure the perimeter of an island"""


def island_perimeter(grid):
    """Return the island perimeter

    use 0 and 1 to represent water and land respectively

    Args:
        grid (list): A list of 0's and 1's
    Returns:
        Island perimeter as denoted by grid
    """
    side = len(grid[0])
    length = len(grid)
    surface = 0
    params = 0

    for i in range(length):
        for j in range(side):
            if grid[i][j] == 1:
                params += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    surface += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    surface += 1
    return params * 4 - surface * 2
