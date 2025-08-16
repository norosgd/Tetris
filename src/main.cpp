#include <raylib.h>
#include "grid.h"

int main() 
{
    // Initialize the window and set the target FPS
    InitWindow(400, 800, "Tetris");
    SetTargetFPS(60); // Set the game to run at 60 frames per second
    Color backgroundColor = { 44, 44, 127, 255 }; // Set the background color

    Grid grid; // Create an instance of the Grid class
    grid.Print(); // Print the initial grid state to the console

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(backgroundColor);

        // Game logic and rendering would go here
        grid.Draw(); // Draw the grid on the screen
        
        EndDrawing();
    }

    CloseWindow();
}