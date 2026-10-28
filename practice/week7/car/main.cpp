/*==========================================================
 [배울 점] getter/setter로 값을 읽고 쓰는 이유
 --------------------------------------------------------
  - setspeed(25)처럼 반드시 함수를 통해 값을 넣게 하는 인터페이스 — 나중에 검증(제한속도 등)을 그 안에 끼울 수 있다
  - mycar.speed를 직접 출력도 가능 — speed가 public인 지금과 private인 미래의 차이를 생각해보자
  - private인 gear/color에 접근 시도하면 컴파일러가 막아주는 것 자체가 C++의 안전장치
==========================================================*/
#include "car.h"
#include <iostream>

using namespace std;

int main(){

    Car mycar;
    
    // 학습: 직접 대입(mycar.speed=25)보다 setter 권장 — 검증을 한 곳에 모을 수 있다
    mycar.setspeed(25);
    cout << "현재 속도는 ";
        cout << mycar.getspeed();
    // 학습: speed는 public이기에 직접 읽기가 가능. private로 바꾸면 이 줄이 에러가 된다
    cout << mycar.speed << endl;


    return 0;
 
}