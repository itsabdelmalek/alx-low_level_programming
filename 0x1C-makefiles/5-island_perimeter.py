#!/usr/bin/python3


def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
        grid (list): A list of lists representing the island grid.

    Returns:
        int: The perimeter of the island.
    """
    width = len(grid[0])
    length = len(grid)
    edge = 0
    size = 0

    for i in range(length):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edge += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edge += 1
    return size * 4 - edge * 2
