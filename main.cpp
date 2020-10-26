#include "Cell.hpp"
#include "Board.hpp"
#include "Gary.hpp"
using std::cout;
using std::endl;

int main(int ac, char** argv){
    Board B(unsigned int 5);
    

    
//    unsigned int boardSize;  //(from command line arguments)
//    unsigned int numberSteps; //(from command line arguments)
//    std::string outputFilename; // (from optional command line argument)
//
//    if (ac != 4 and ac != 5) {
//           cout << "Error: Command line arguments are incorrect. Call program as (1) or (2)"
//           << endl;
//           return -1;
//    }
//
//    // Parse the command line arguments
//    //filename is not specified
//    else if (ac == 4){
//        boardSize =  atoi(*(argv + 2));
//        numberSteps = atoi(*(argv + 3));
//    }
//
//    //filename is specified
//    else{
//        boardSize =  atoi(*(argv + 2));
//        numberSteps = atoi(*(argv + 3));
//        outputFilename = *(argv + 4);
//        }
//
//    cout << "boardSize: " << boardSize << endl;
//    cout << "steps: " << numberSteps << endl;
//    cout << "output Filename " << outputFilename << endl;
//
//    Board B (boardSize);
//    Gary G (boardSize);
//
//    //G.get_orientation();
//    G.get_orientation_string();
//    G.get_row();
//    G.get_col();
//
//    //begin testing turn() function
//    Cell c;
//    Cell *cptr = &c;
//    G.turn(cptr);
//    c.change_color();
//    G.turn(cptr);
//    //end testing turn() function
//
//  /*
//    else{
//        Board B(boardSize);
//        if (an output filename is given){
//            B.setOutputFilename(outputFilename);
//        }
//        B.move_gary(numberSteps);
//    }
//*/
//    vector<int> testVec(3);
    return 0;
}
