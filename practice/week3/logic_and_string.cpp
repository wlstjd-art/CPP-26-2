#include <iostream>
#include <string>

int main(){


    char c1 ='a';
    char c2{'b'};
    std::string s1 = "good";
    std::string s2 = "bad";
    bool b = (s1 == s2);
    std::cout << b << '\n';

    s2 = "good";
    //s2 = "morning";

    b=(s1==s2);
    std::cout <<b<<'\n';



}