#ifndef _BOARD_H_
#define _BOARD_H_
#include <vector>

class Board
{
  private:
  std::vector <std::vector<char> > grid;

  public:
  Board();
  getWholeBoard();
  void setSize(int, int);
  void fillWith(char);
//  void assign(char, int, int);
//  char get(int, int);
};

#endif
