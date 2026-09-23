#include <iostream>

int main(){

    long fact = 1;
    int n;

    std::cout <<"Enter a num: ";
    std::cin >> n;
    
    for(int i = 0; i <= n; i++){
        fact = fact * i;
    }

    std::cout <<"!" <<n<<"is "<<fact;

    return 0;
}