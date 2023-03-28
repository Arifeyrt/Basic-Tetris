#include "tetromino.h"


    Tetromino::Tetromino(shape myshape){
       if(myshape==shape::I) {
           tetrominoType={{'I','I','I','I'},
                          {' ',' ',' ',' '},
                          {' ',' ',' ',' '},
                          {' ',' ',' ',' '}};

       }
       else if(myshape==shape::O){
           tetrominoType={{'O','O',' ',' '},
                          {'O','O',' ',' '},
                          {' ',' ',' ',' '},
                          {' ',' ',' ',' '}};

       }
       else if (myshape==shape::T){
            tetrominoType={{'T','T','T',' '},
                           {' ','T',' ',' '},
                           {' ',' ',' ',' '},
                           {' ',' ',' ',' '}};
       }
       else if(myshape==shape::J){
            tetrominoType={{' ','J',' ',' '},   
                           {' ','J',' ',' '},
                           {'J','J',' ',' '},
                           {' ',' ',' ',' '}};
       }
       else if(myshape==shape::L){
            tetrominoType={{'L',' ',' ',' '},
                           {'L',' ',' ',' '},
                           {'L','L',' ',' '},
                           {' ',' ',' ',' '}};
       }
       else if(myshape==shape::S){
            tetrominoType={{' ','S','S',' '},
                           {'S','S',' ',' '},
                           {' ',' ',' ',' '},
                           {' ',' ',' ',' '}};
       }
        else if (myshape==shape::Z){
            tetrominoType={{'Z','Z',' ',' '},
                           {' ','Z','Z',' '},
                           {' ',' ',' ',' '},
                           {' ',' ',' ',' '}};
       }
    }
  
//write function
  void Tetromino::print(){ 
      int i,j;
      for(i=0;i<tetrominoType.size();i++){
        for(j=0;j<tetrominoType.size();j++){
            cout<<tetrominoType[i][j];

      }
      cout<<endl;
    }
  }

// rotate a 4 x 4 matrix
// anti-clockwise direction and  by 90 degrees in
void Tetromino::rotate()
{
    for (int i = 0; i < 2; i++) {
        for (int j = i; j < 3 - i; j++) {
            // Store current cell in
            // using a temp variable to carry
            int temp = tetrominoType[i][j];
            // turning from bottom to right
            tetrominoType[j][3 - i]= tetrominoType[3 - i][3 - j];
 
            // turning from right to top
           tetrominoType[i][j]= tetrominoType[j][3 - i];
 
            // left to bottom
            tetrominoType[3 - i][3 - j] = tetrominoType[3 - j][i];
 
            // assing temp to the left
           tetrominoType[3 - j][i] = temp;
            }
    } 
}