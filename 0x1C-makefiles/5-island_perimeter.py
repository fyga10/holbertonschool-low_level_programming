#!/usr/bin/python3
"""
Perimeter of the island
"""
def island_perimeter(grid):
    """Calculate the perimeter"""
    contador = 0
    repeticion = 0
    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if grid[row][col] == 1:
                contador += 1
                if row != 0 and grid[row - 1][col] == 1:
                    repeticion += 1
                if col != 0 and grid[row][col - 1] == 1:
                    repeticion += 1
    return contador * 4 - repeticion * 2
