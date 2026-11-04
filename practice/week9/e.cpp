#include <iostream>
#include <array>
using namespace std;

int main(){

    array <int, 3> list {1,2,3};
    for(int i = 0; i < list.size(); i++){
        ++list[i];
    }



    return 0;
}