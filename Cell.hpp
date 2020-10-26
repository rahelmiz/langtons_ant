#ifndef HAVEYOUSEENTHSISNAIL_CELL
#define HAVEYOUSEENTHSISNAIL_CELL


#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
//Cell Class Template:
using std::cout;
using std::endl;
using std::string;
// Declare an enumaration data type to store the Cell's color
enum CellColor {white = 0, black = 1};

class Cell {
// Declare the Cell Class
//create ONE cell, and THEN in main() initialize the grid

public:
    // Declare default constructor to initialize color to white
    Cell();
    // Declare member function getter for the color (get_color). Returns CellColor

    // Declare a member to flip the color (change_color)
    void change_color();
    
    // Declare a member to print the string for this color.
    // white = "0", black = "1"
    CellColor get_color();
    
    string get_color_string();
    
    //set the color (not req'd)
    void setColor(CellColor c){ color = c;}

private:
// Declare the color of this cell (color) as type CellColor
    CellColor color;
};

#endif

