/*==========================================================
 [배울 점] private / public — 정보은닉의 첫 등장
 --------------------------------------------------------
  - 접근 지정자가 없으면 기본이 private: gear, color는 클래스 밖에서 직접 못 만진다
  - public 아래 speed와 getter/setter는 외부에 공개되는 '인터페이스'
  - ⚠ speed는 public이라 함수를 거치지 않고도 고쳐진다 — 왜 함부로 public하지 말아야 하는지 이 파일이 보여준다
==========================================================*/
#include <iostream>
#include <string>
using namespace std;

class Car
{

    
    // 학습: public을 안 쓰면 기본 private — 클래스 밖 접근은 컴파일 에러
    int gear;
    string color;
    
    // 학습: 여기부터 외부 공개. '공개 면적은 좁게'가 캡슐화 설계 원칙
    public:
        int speed;
        int getspeed();
        void setspeed(int s);

};