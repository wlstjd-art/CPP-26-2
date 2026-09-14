#include <iostream>

int main(){

    int num;
    int num2;
    std::cout <<"Enter the balance: ";
    std::cin >>num;
    std::cout <<"Enter a: ";
    std::cin >>num2;
    int a=num/num2;
    
    std::cout <<"You can buy "<<a<<'\n';

    std::cout<<"balance: "<<num - num2* a<<'\n';




    return 0;
}