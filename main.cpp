#include <iostream>
#include "Board.h"
#include <vector>

using namespace std;

int main()
{
  Board ticTacToe;
  vector< vector<char> >gameBoard;

  ticTacToe.setSize(3,3);
  ticTacToe.fillWith('X');

  gameBoard = ticTacToe.getWholeBoard();

  for(int r=0; r<gameBoard.size(); r++)
  {
    for(int c=0; c<gameBoard[r].size(); c++)
    {
      cout<< gameBoard[r][c]<<" ";
    }
    cout<<endl;
  }

  return 0;
}
