#pragma once
#include <raylib.h>
#include <Vector>


class Grid
{
public:
    Grid();
    
    int grid[20][10]; // grid size for Tetris (20 rows, 10 columns)

    void Print();
    void Draw(); // Function to draw the grid

private:
    int m_NumRows;
    int m_NumCols;
    int m_CellSize;
    int m_DrawOffset; // Offset for drawing rectangles to avoid overlap
    std::vector<Color> m_Colors; // Vector to hold colors for rendering
    
    void InitializeColors(); // Function to initialize colors for the grid
};