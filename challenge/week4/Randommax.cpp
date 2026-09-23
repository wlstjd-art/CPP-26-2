#include <iostream>
#include <stdlib.h>

int main(){
    const int numcell = 10;
    int numlist[numcell][numcell];
    
    for(int i = 0; i<numcell;i++){
        for(int j = 0; j <numcell ; j++){
            int a = rand() %1000;
            numlist[i][j] = a;
            std::cout<<i<<","<<j<<":"<<numlist[i][j]<<'\n';
        }
        
    }
    std::cout <<'\n';

    int max;
    int maxI;
    int maxJ;
    max = numlist[0][0];

    for(int i=0;i<numcell;i++){
        for(int j=0;j<numcell;j++){
            if(numlist[i][j]>max){
                max = numlist[i][j];
                maxI=i;
                maxJ=j;
            }

        }
    }
    std::cout <<"가장 큰 값은"<<max<<"이고,"<<"i와 j는 각각 "<<maxI<<maxJ<<"입니다.";



}