#include <iostream>
#include <string>

int main(){
    std::string str;

    do{
        std::cout <<"Enter line ";
        getline(std::cin,str);
        std::cout <<"Your line is "<< str <<'\n';

        
    }while(str !="quit");

    return 0;
}