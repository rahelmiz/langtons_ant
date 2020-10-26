
//#include "Cell.hpp"
//#include "Gary.hpp"
//
//#ifndef Board_hpp
//#define Board_hpp
//#include <stdio.h>
//#include <iostream>
//using std::vector;
//
//using std::cout;
//using std::endl;
//using std::vector;
//
//class Board{
//    public:
//
//    int Size;
//    Gary G(unsigned int n);
//    vector<vector<Cell>> grid;
//    unsigned int n;
//
//public:
//
//    Board(unsigned int n){
//        int Ans = IsEven(n);
//
//        if(Ans == 0){
//            n++;
//        }
//        createGrid();
////        Gary G(unsigned int n);
//
//
////        int Size = n;
//    }
//    void createGrid(){
//        Cell c;
//        vector<Cell> x;
//
//        for(int ll = 1;ll < n;ll++){
//            for(int ii = 1;ii < n;ii++){
//                x.push_back(c);
//            }
//            grid.push_back(x);
//        }
//    }
//    int IsEven(unsigned int x){
//        int check = n%2;
//        int Ans;
//
//        if(check != 0){
//            Ans = 1;
//        }else{
//            Ans = 0;
//        }
//        return Ans;
//    }

//};


Board::Board(unsigned int n){
    //check if boardSize is odd
    //define a row containing number = boardSize Cell objects
    //if n is odd, add 1
    cout << "[Board constructor]\n" << "\t n is " << n << endl;
        if ((n % 2) == 0){
            cout << "\t Board dimension must be an odd number!! Got " << n << " and adding 1 to equal " << n + 1 << endl;
                boardSize = n + 1;
        }
        else{
            boardSize = n;
        }
    cout << "\t new boardSize: " << boardSize << endl;
    const int numCells = boardSize;

    vector<Cell> rowCell(numCells); //declare a  row vector of cell objects
    //populate it
    for (int i = 0; i<numCells; ++i ){

    }
    vector<vector<Cell>> Board(numCells, rowCell); //create a vector of row vectors
    //check if the board dims are n x n
    cout<<"\t rows in board: " << Board.size() <<endl;
    cout<<"\t cols in board: " << rowCell.size() <<endl;

}



