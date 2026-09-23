#include <iostream>

int main(){

    int n;
    int i = 1;

    std::cout <<"Enter a: ";
    std::cin >> n;
    while(i <=9){
        std::cout << n << "*"<<i<<"="<<n*i<<'\n';
        i++;
    }


    return 0;
}