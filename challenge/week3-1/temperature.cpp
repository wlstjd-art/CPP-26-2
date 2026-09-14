#include <iostream>

int main(){
    double a;
    double b;

    std::cout <<"Enter the temperature in F: ";
    std::cin >>a;

    b= (5.0/9.0)*(a-32);

    std::cout <<"Temperature in fer to cel : "<<b;

    return 0;
}