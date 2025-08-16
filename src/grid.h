#pragma once

class Grid
{
public:
    Grid();
    
    int grid[20][10]; // grid size for Tetris (20 rows, 10 columns)

    void Print();
    
private:
    int m_NumRows;
    int m_NumCols;
    int m_CellSize;

};