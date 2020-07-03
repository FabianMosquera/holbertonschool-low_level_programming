#!/usr/bin/python3
""" Island Perimeter """


def island_perimeter(grid):
    """ returns the perimeter of the island
    """
    pmtro = 0
    grid1 = len(grid)
    for row in range(grid1):
        grid2 = len(grid[row])
        for col in range(grid2):
            if grid[row][col] == 1:
                if (row == 0 or (grid[row - 1][col] != 1)):
                    pmtro += 1
                if (row == (grid1 - 1) or (row < grid1 - 1 and
                                          grid[row + 1][col] != 1)):
                    pmtro += 1
                if (col == 0 or (grid[row][col - 1] != 1)):
                    pmtro += 1
                if (col == (grid2 - 1) or (col < grid2 - 1 and
                                          grid[row][col + 1] != 1)):
                    pmtro += 1
    return (pmtro)
