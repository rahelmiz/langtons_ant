//
//  Gary.hpp
//  Gary
//
//  Created by rahel mizrahi on 10/22/20.
//

#ifndef Gary_hpp
#define Gary_hpp

#include <stdio.h>
#include "Cell.hpp"
#include <iostream>
#include <vector>
#include <math.h>       /* ceil */
struct position{
    int x;
    int y;
};

enum orientation {up, down, left, right};
class Gary{
public:
// ********* member funcs ******************** //
    Gary(unsigned int boardSize);
    unsigned int get_row();
    unsigned int get_col();
    void turn(Cell* cell);
    void translate(Cell* cell);
    void move(Cell* cell); //move calls turn( ), translate( )
    orientation get_orientation();
    void get_orientation_string();
   
    // ********* data members ******************** //
    position Position;
    orientation Orientation;
private:
    //void turn(Cell* cell);
    unsigned int max;
};

#endif /* GaryClass_hpp */
