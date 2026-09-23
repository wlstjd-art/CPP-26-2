#include <iostream>
#include<string>

int main(){


    std::string s1 = "appleA";
    std::string s2;

    s2 = s1 + " "+ std::to_string(10);
    std::cout <<s2  <<'\n';


    return 0;
}
