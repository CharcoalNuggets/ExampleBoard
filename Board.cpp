#include "Board.h"

Board::Board()
{


}

std::vector< std:: vector<char> > Board::getWholeBoard();
{
  return grid;
}

void Board::setSize(int row, int column)
{
  grid.resize(row);
  for(int i=0; i<grid.size(); i++)
  {
    grid[i].resize(column);
  }
}

void Board::fillWith(char value)
{
  for(int r=0; r<grid.size(); r++)
  {
    for(int c=0; c<grid[r].size(); c++)
    {
      grid[r][c]= value;
    }
  }
}
