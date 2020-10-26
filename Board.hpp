//

//
//  Created by rahel mizrahi on 10/22/20.
//

#include "Cell.hpp"
#include "Gary.hpp"

#ifndef Board_hpp
#define Board_hpp
#include <stdio.h>
#include <iostream>
using std::vector;


class Board;
class Board {
public:
    Board(unsigned int n);
    unsigned int boardSize;
    void move_gary(unsigned int numSteps);
//private (once tested)
    //Gary gary;
 //   vector<Cell> rows;
   // vector<vector<Cell>> Grid( const int stackedRows, vector<Cell> rows);//private:
    //vector<vector<int>> array_2d(rows, vector<int>(cols, 0));
    vector<vector<Cell>> Grid( int n, vector<Cell>( int n, Cell));
// ********* data ************//
    //Cell cell;


// ********* member funcs ************//

};

#endif /* Board_hpp */

