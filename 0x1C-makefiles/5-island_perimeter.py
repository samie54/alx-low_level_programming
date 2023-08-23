#!/usr/bin/python3
"""
Island Perimeter
"""

def island_perimeter(grid):
    """returns perimeter of island description in grid.

    Args:
        grid(matrix): input grid

    Descriptive message:
        Traverses land mass; and
        the lake's nearest neighborr
        and returns total length.

    """
    y = 0
    x = 0
    
    for row in range(1, len(grid) - 1):
            for col in range(1, len(grid[row]) - 1):
                if grid[row][col] == 1:
                    if grid[row][col - 1] == 0:
                        y += 1
                    if grid[row][col + 1] == 0:
                        y += 1
                    if grid[row - 1][col] == 0:
                        x += 1
                    if grid[row + 1][col] == 0:
                        x += 1
    return x + y
