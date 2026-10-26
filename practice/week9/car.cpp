#include <iostream>

#include <string>

using namespace std;

class car{
public:
    int speed;
    int gear;
    string color;

    void speedup(){
        speed += 10;
    }
    void speeddown(){
        speed -= 10;

    }

};
int main(){

    car morning;

    morning.speed = 100;
    morning.gear = 3;
    morning.color = "grey";

    cout << "1st speed: " << morning.speed <<endl;
    morning.speedup();
    cout << "2nd speed: " << morning.speed <<endl;




}