#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main(){

    vector <string> vec;

    vec.push_back("MILK");
    vec.push_back("BREAD");
    vec.push_back("BUTTER");
    for(auto& a : vec)
        cout << a << ' ';
    cout << endl;
    

    return 0;
}