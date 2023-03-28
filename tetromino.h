#ifndef TETROMINO_H
#define TETROMINO_H

#include <vector>
#include <iostream>
using namespace std;

enum class shape{I,O,T,J,L,S,Z};//strong enum

class Tetromino{
    private:
    vector<vector<char>> tetrominoType;//have defined a 2D vector
    public:
    Tetromino(shape myshape);
  
//write function
  void print();

// rotate a 4 x 4 matrix
// anti-clockwise direction and  by 90 degrees in
void rotate();
};

#endif