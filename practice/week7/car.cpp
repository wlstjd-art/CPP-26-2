#include <iostream>
#include <string>
using namespace std;

class Car
{
    public:
        //멤버 변수 선언
        int speed;  //속도  
        int gear;   //기어
        string color;   //색

        void speedup() //속도 증가 멤버 함수
        {
            speed += 10;
        }

        void speeddown()    //속도 감소 멤버 함수
        {
            speed -= 10;
        }

};

int main()
{
    Car morning;

    morning.speed = 60;
    morning.gear = 3;
    morning.color = "red";
    
    cout << "1st speed : " << morning.speed << endl;

    morning.speedup();
    
    cout << "2nd speed : " << morning.speed << endl;

    morning.speeddown();
    
    cout << "3rd speed : " << morning.speed << endl;

    return 0;
}