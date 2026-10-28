#include "car.h"
#include <iostream>

using namespace std;

int main(){

    Car mycar;
    
    mycar.setspeed(25);
    cout << "현재 속도는 ";
        cout << mycar.getspeed();
    cout << mycar.speed << endl;


    return 0;
 
}