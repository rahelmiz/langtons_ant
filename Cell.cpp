//
//  Cell.cpp
//  Project0 PartA
//
//  Created by rahel mizrahi on 10/3/20.
//  Copyright © 2020 rGerson. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
#include "Cell.hpp"
using std::cout;
using std::endl;
using std::string;

Cell::Cell(){
// Default constructor initializes cell color to white
    color = white;
}
//setColor

void Cell::change_color(){
    //cout<<"[Cell::ChangeColor]"<<endl;
    if (color == white){
        color = black;
    }
    else{
        color = white;
    }
        //cout<< "\tchanging cell color to black" <<endl;
}

CellColor Cell::get_color(){
    //cout<< "[Cell::get_color]" << endl;
    if (color == white){
        //cout<< "\tcell color is white"<<endl;
    }
    else{
        //cout<<"\tcell color is black"<<endl;
    }
    return color;
}

string Cell::get_color_string(){
    //cout<< "[Cell::get_color_string]" << endl;
    string c;
    if (color == white){
        c = "0";
    }
    else{
        c = "1";
    }
    cout<< c << endl;
    //cout<<"\tc is "<< c <<endl;
    return c;
}

