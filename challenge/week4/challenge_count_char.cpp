#include <iostream>
int main(){
    int a = 0;
    int b = 0;
    std::cout <<"Enter a character and type ctrl+z"<<'\n';

    char ch;

    while(std::cin >>ch){
        switch(ch){
            case 'a':
            a++;
            break;
            case 'e':
            a++;
            break;            
            case 'i':
            a++;
            break;
            case 'o':
            a++;
            break;
            case 'u':
            a++;
            break;
            default :
                b++;
        } 


    }


    std::cout << a<<'\n';
    std::cout << b<<'\n';

    return 0;
}