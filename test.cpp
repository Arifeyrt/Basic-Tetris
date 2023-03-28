#include <iostream>
#include <iomanip>
#include <vector>
#include "tetromino.h"
using namespace std;


int main(){
int num;
char shape;
cout<<"how many tetrominos?"<<endl;
cin>>num;
vector<Tetromino>tet;//creating a tetromino vector
cout<<"What are the types?"<<endl;
for(int i=0;i<num;i++){
cin>>shape;
while(shape!='I' && shape!='O' && shape!='T'&& shape!='J'&& shape!='L'&& shape!='S'&& shape!='Z' ){
  cout<<"wrong latter"<<endl;
    cin>>shape;}//ask for the right shape
if(shape=='I'){
tet.push_back(Tetromino(shape::I));//add vector element with function push back
}
else if(shape=='O'){
    tet.push_back(Tetromino(shape::O));
}
else if(shape=='T'){
    tet.push_back(Tetromino(shape::T));
}
else if(shape=='J'){
    tet.push_back(Tetromino(shape::J));
}
else if(shape=='L'){
    tet.push_back(Tetromino(shape::L));
}
else if (shape=='S'){
    tet.push_back(Tetromino(shape::S));
}
else if(shape=='Z'){
    tet.push_back(Tetromino(shape::Z));
}
}
for(int j=0;j<num;j++)
tet[j].print(); //print the shape


    tet[0].rotate();
    tet[0].print();

return 0;

}