/*==========================================================
 [배울 점] 캡슐화 — private 데이터 + getter/setter 경비원
 --------------------------------------------------------
  - hour/minute을 private로 막아 제멋대로 변경을 원천 차단 (컴파일 에러로 확인 가능)
  - IncHour()가 23시 넘으면 0시로 롤오버 — 시간 로직을 함수 하나에 모아 전부 정복
  - time_class.cpp(멤버 public)와의 비교가 이 파일의 핵심 메시지: 데이터 보호는 구조로 하는 것
==========================================================*/
#include <iostream>
using namespace std;

class Time{
    // 학습: 데이터 봉쇄. main에서 a.hour=10 은 컴파일 에러 — 주석의 '에러!!'이 그 증거
    private:
        int hour;
        int minute;
    public:
        Time(int h, int m);
        void IncHour();
        void Print();

        // 학습: getter/setter — private이어도 통제된 읽기/쓰기는 열어준다
        int gethour(){return hour;}
        int getminute(){return minute;}
        void sethour(int h){hour = h;}
        void setminute(int m){minute = m;}        
};

Time::Time(int h, int m){    //외부서 작성!!!
    hour = h;
    minute =  m;
}
// 학습: 롤오버(23->0)를 함수에 캡슐화 — 쓰는 사람은 함정을 몰라도 안전
void Time::IncHour(){       //외부서 작성!!
    ++hour;
    if(hour > 23)
        hour = 0;
}
void Time::Print(){
    cout << hour << " : " << minute << endl;
}

int main(){

    Time a{3 ,4};
    //a.hour = 10;    //에러!! hour 는 private로 class 내에서만 접근가능하다!
    a.sethour(5);
    a.setminute(30);

    a.Print();


    return 0;
}