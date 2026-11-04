#include <vector>
#include <iostream>
using namespace std;

int main(void){

    vector <int> fiv{0,1,2,3,4};
    for(auto number : fiv){
        cout << number << ' ';
    }
    cout << endl;



    return 0;
}