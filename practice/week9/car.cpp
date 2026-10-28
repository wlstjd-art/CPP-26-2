#include <iostream>
#include <string>
using namespace std;

class Car{
    public: //디폴트는 프라이벳임
        //멤버 변수 선언
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

    Car mycar;

    mycar.speed = 100;
    mycar.gear = 3;
    mycar.color = "red";

    cout << "first speed: " << mycar.speed << endl;

    mycar.speedup();
   
    cout << "second speed: " << mycar.speed << endl;

    mycar.speeddown();
    mycar.speeddown();

    cout << "third speed: " << mycar.speed << endl;



    return 0;
}