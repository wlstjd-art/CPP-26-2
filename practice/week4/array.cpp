#include <iostream>

int main(){

    int sales[5] = {100,200,300,400,500};

    for(int i = 0; i < 5; i++){
        std::cout <<sales[i]<<'\n';
    }
    sales[3]=4;

    for(int i = 0; i < 5; i++){
        std::cout <<sales[i]<<'\n';
    }


    return 0;
}