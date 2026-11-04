#include <vector>
#include <iostream>
using namespace std;

int main(){
    vector <int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(6);
    v1.push_back(7);


    cout << "v1: ";
        for(auto& a : v1)
            cout << a << ' ';
}