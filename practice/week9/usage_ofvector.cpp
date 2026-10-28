#include <vector>
#include <iostream>
using namespace std;

int main(){

    vector <int> fibonacci {0,1,2,3,4,5};

    for (auto& n : fibonacci){
        cout << n << " ";
        n++;
    }
    cout << endl;
    for (auto n : fibonacci){
        cout << n << ' ';
    }
    cout << endl;

    return 0;
}