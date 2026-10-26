#include "car.h"

using namespace std;

int main(){

    Car mycar;

    mycar.setspeed(25);
    cout << "현재 속도는 ";
        cout << mycar.getspeed();

    return 0;

}