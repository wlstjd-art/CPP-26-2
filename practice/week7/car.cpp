/*==========================================================
 [배울 점] 데이터 + 행위를 함께 묶는 클래스
 --------------------------------------------------------
  - speed/gear/color(상태)와 speedup/speeddown(동작)을 하나의 클래스로 — 객체지향의 정의
  - 멤버 함수 안에서는 멤버 변수를 그냥 이름만으로 쓴다 (this->speed지만 생략 가능)
  - morning.speedup()처럼 '.'로 '객체에게 동작 시키기'의 감각
==========================================================*/
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

        // 학습: 멤버 함수 안에서 speed는 '이 객체의 speed'. 별도 선언 없이 바로 쓰인다
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
    // 학습: 객체를 만들고 멤버에 .으로 접근. C의 struct에 함수가 붙었다고 생각하면 된다
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