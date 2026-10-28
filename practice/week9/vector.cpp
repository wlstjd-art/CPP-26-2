#include <vector>
#include <iostream>
using namespace std;

int main(void){

    //vector <int> fibonacci;
    //fibonacci = {1,2,3,4}; 도가능!
    vector<int> fibona {0,2,3,4,1214,3};
    //새로운초기화방법!


    for(auto number : fibona){
        cout << number << ' ';
    }
    cout << endl;
    return 0;
}