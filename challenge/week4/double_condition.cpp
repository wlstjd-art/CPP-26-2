#include <iostream>


int main(){

    int num1,num2;
    std::cout <<"Enter num 1 and num 2 : ";
    std::cin >>num1>>num2;

    if(num1>0){
        if(num2>0){
            std::cout <<"both number is greather than 0"<<'\n';

        }
        else{
            std::cout << "only num 1 is greather than 0"<<'\n';
        }

    }
    else if(num1<0){
        if(num2<0){
            std::cout << "both number is less than 0"<<'\n';
        }
        else{
            std::cout << "only num 2 is greather than 0"<<'\n';

        }
    }





}