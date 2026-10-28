/*==========================================================
 [배울 점] 생성자 오버로딩 — 기본 생성자와 인자 생성자
 --------------------------------------------------------
  - Time()과 Time(int,int) 두 개의 생성자 — 만드는 방법에 따라 알맞은 게 자동 호출
  - Time b{10,20}; 중괄호 초기화로 생성자 호출 (Time b(10,20)과 같다)
  - ⚠ 기본 생성자 Time(){}는 몸체가 비어 있어 hour/minute이 초기화 안 된 채 — Time a;의 출력이 이상한 이유
==========================================================*/
#include <iostream>

using namespace std;

class Time{

    public:
        int hour;
        int minute;
    // ⚠ 몸체 없는 기본 생성자 — 멤버를 하나도 안 초기화. a.printtime()이 휴지값을 출력
    // 학습: 기본 생성자 호출 — 위 함정으로 hour/minute이 미설정 상태가 된다
    Time(){}//오버로딩 //Time a;를 가능케해줌;
    // 학습: 생성자도 오버로딩 — 인수가 맞는 생성자가 자동 선택된다
    Time(int h, int m){
        hour = h;
        minute = m;
    }

    void printtime(){
        cout << hour << " : " << minute << endl;
    }
};

int main(){

    Time a;
    // 학습: 중괄호 초기화 — 2개 인수를 받아 인자 생성자가 실행
    Time b{10,20};
    Time c{10,40};
    Time d{10,50};
    
    a.printtime();
    b.printtime();
    c.printtime();
    d.printtime();

    return 0;
}