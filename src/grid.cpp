#include "grid.h"
#include <iostream>

Grid::Grid() 
{
    m_NumRows = 20; // Set number of rows for Tetris grid
    m_NumCols = 10; // Set number of columns for Tetris grid
    m_CellSize = 30; // Set cell size for rendering

    // Initialize the grid with zeros using a nested loop
    for (int i = 0; i < m_NumRows; i++) 
    {
        for (int j = 0; j < m_NumCols; j++) 
        {
            grid[i][j] = 0;
        }
    }
}
void Grid::Print() 
{
    for(int i = 0; i < m_NumRows; i++)
    {
        for(int j = 0; j < m_NumCols; j++)
        {
            std::cout << grid[i][j] << " "; // Print each cell value
        }
        std::cout << std::endl; // New line after each row
    }
}