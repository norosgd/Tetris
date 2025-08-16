#include "grid.h"
#include <iostream>

Grid::Grid() 
{
    m_NumRows = 20; // Set number of rows for Tetris grid
    m_NumCols = 10; // Set number of columns for Tetris grid
    m_CellSize = 40; // Set cell size for rendering
    m_DrawOffset = 2; // Set draw offset to avoid overlap

    // Initialize the grid with zeros using a nested loop
    for (int i = 0; i < m_NumRows; i++) 
    {
        for (int j = 0; j < m_NumCols; j++) 
        {
            grid[i][j] = 0;
        }
    }
    InitializeColors(); // Initialize the colors for rendering
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

void Grid::InitializeColors() 
{
    Color darkGrey = {26, 31, 40, 255};
    Color green = {47, 230, 23, 255};
    Color red = {232, 18, 18, 255};
    Color orange = {226, 116, 17, 255};
    Color yellow = {237, 234, 4, 255};
    Color purple = {166, 0, 247, 255};
    Color cyan = {21, 204, 209, 255};
    Color blue = {13, 64, 216, 255};
    Color lightBlue = {59, 85, 162, 255};
    Color darkBlue = {44, 44, 127, 255};

    m_Colors = {darkGrey, green, red, orange, yellow, purple, cyan, blue, lightBlue, darkBlue};
}

void Grid::Draw() 
{
    for (int i = 0; i < m_NumRows; i++) 
    {
        for(int j = 0; j < m_NumCols; j++)
        {
            // Use the grid value to determine the color to draw
            int cellValue = grid[i][j];
            DrawRectangle(j * m_CellSize+1, i * m_CellSize+1, m_CellSize-m_DrawOffset, m_CellSize-m_DrawOffset, m_Colors[cellValue]); // Draw each cell with a color based on its value
        }
    }
}