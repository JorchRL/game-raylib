#include "../include/grid.h"
#include <iostream>

Grid::Grid() {
  numRows = 20;
  numColumns = 10;
  cellSize = 10;
  Initialize();
}

void Grid::Initialize() {
  for (int row = 0; row < numRows; row++) {
    for (int col = 0; col < numColumns; col++) {
      grid[row][col] = 0;
    }
  }
}

void Grid::Print() {
  // std::cout << "PRINT GRID!!!" << std::endl;
  for (int row = 0; row < numRows; row++) {
    for (int col = 0; col < numColumns; col++) {
      std::cout << grid[row][col] << " ";
    }
    std::cout << std::endl;
  }
}
