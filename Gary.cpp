//
//  Gary.cpp
//  Gary
//
//  Created by rahel mizrahi on 10/22/20.
//


#include "Gary.hpp"
#include <stdio.h>
#include <iostream>

using std::cout;
using std::endl;

Gary::Gary(unsigned int boardSize){
    if ((boardSize % 2) == 0){
        boardSize = boardSize + 1;
    }
    
    //initial pos = board center
    Position.x = ceil(boardSize/2);
    Position.y = ceil(boardSize/2);
    //cout << "(x,y)" <<
    //init orientation = up
    Orientation = up;
    cout << "[Gary constructor]\n" << "\t init position: (" << Position.x << "," << Position.y << ")" << endl;
    cout << "\t init orientation: " << Orientation << endl;
    max = boardSize; // need to store in order to specify when to wrap around
                        
}

unsigned int Gary::get_row(){
    cout << "[Gary::get_row]\n" << "\t row: " << Position.x << endl;
    return Position.x;
}

unsigned int Gary::get_col(){
    cout << "[Gary::get_col]\n" << "\t col: " << Position.y << endl;
        return Position.y;
}

orientation Gary::get_orientation(){
    cout << "[Gary::get_orientation]\n" << "\t orientation: " << Orientation << endl;
    return Orientation;
}

void Gary::get_orientation_string(){
cout << "[Gary::get_orientation_string]" << endl;
    string orientationString;
    //orientation Orientation = get_orientation();
    switch(Orientation){
        case (up):
            cout << "\t orientation: up"  << endl;
            break;
        case (down):
            cout << "\t orientation: down"  << endl;
            break;
        case (left):
            cout << "\t orientation: left"  << endl;
            break;
        case (right):
            cout << "\t orientation: right" << endl;
            break;
    }
}

void Gary::translate(Cell* cell){
    const int maxIndex = max -1;
    //translate
    switch (Orientation){
        case (up):
            //check if it's a boundary condition
            if (Position.x == 0){
                Position.x = maxIndex;
            }
            else {
                ++Position.y;
            }
        break;
        case (down):
            //check if it's a boundary condition
            if (Position.x == maxIndex){
                Position.x = 0;
            }
            else {
                --Position.y;
            }
        break;
        case (left):
            //check if it's a boundary condition
            if (Position.y == 0){
                Position.y = maxIndex;
            }
            else {
                --Position.y; //go to left col
            }
        break;
        case (right):
            //check if it's a boundary condition
            if (Position.y == maxIndex){
                Position.y = 0;
            }
            else {
                ++Position.y; //go to adj right col
            }
        break;
    }
}

void Gary::turn(Cell* cell){
    const int maxIndex = max -1;
    cout << "[Gary::turn]" <<endl;
    //turn
    CellColor color = cell->get_color();
    if (color == black){
        if (Orientation == up){
            if (Position.x != 0){ //not in first row
            Orientation = left;
            }
        }
        else if (Orientation == down) {
            if (Position.x != maxIndex){ //not in the last row
            Orientation = right;
        }
        }
        else if (Orientation == left){
            if (Position.y != 0){ //not in first col
                Orientation = down;
            }
        }
        else{ // Orientation == right
            if (Position.y != maxIndex){ //not in last col
                Orientation = up;
            }
        }
    }
    if (color == white){
        if (Orientation == up){
            if (Position.x != 0){ //not in first row
            Orientation = right;
            }
        }
        else if (Orientation == down) {
            if (Position.x != maxIndex){ //not in the last row
            Orientation = left;
            }
        }
        else if (Orientation == left){
            if (Position.y != 0){ //not in first col
                Orientation = up;
            }
        }
        else{ // Orientation == right
            if (Position.y != maxIndex){ //not in last col
                Orientation = down;
            }
        }
    cout<< "\t" ;
    get_orientation_string();
    }
}

void Gary::move(Cell* cell){
    
}



