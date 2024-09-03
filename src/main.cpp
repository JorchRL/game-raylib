#include "../include/grid.h"
#include "raylib.h"
#include <iostream>

//
int main() {
  InitWindow(800, 450, "Raylib Example");
  SetTargetFPS(60);

  Grid gameGrid = Grid();
  gameGrid.Print();

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(RAYWHITE);
    DrawText("Hi!!!", 400, 200, 14, RED);
    EndDrawing();
  }
  CloseWindow();
  return 0;
}
