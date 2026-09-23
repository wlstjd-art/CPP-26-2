#include <iostream>
#define width 9
#define height 3


int main(){
    int table[height][width];
    int r,c;

    for(r=0;r<height;r++){
        for(c=0;c<width;c++){
            table[r][c] = (r +1)*(c+1);
        }
    }
    for(r=0;r<height;r++){
        for(c=0;c<width;c++){
            std::cout <<table[r][c] <<" ";

        }
        std::cout <<'\n';
    }




}