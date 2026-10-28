/*==========================================================
 [배울 점] 클래스 안에 선언 / 밖에 정의 — ClassName:: 원리
 --------------------------------------------------------
  - class 안에는 '선언'만, 몸체는 클래스 밖에서 double circle::calcarea() 형태로 쓴다
  - :: 는 '이 함수는 circle 클래스의 구성원'이라는 표시 — 나중에 정적 멤버에서도 쓰는 같은 문법
  - r(반지름)과 color(색)처럼 '데이터 묶음'을 만드는 것이 클래스의 첫 번째 정체 (함수 포함은 다음 단계)
==========================================================*/
#include <iostream>
using namespace std;

class circle
{
    public:
    
    double calcarea();

    int r;  //반지름
    string color; //색
};
//클래스 외부에서 멤버 함수들이 정의됨.
// 학습: 클래스명:: 함수명 = '이 함수는 circle의 구성원'이라는 표시
double circle::calcarea()
{
    return 3.14 * r * r;
}

int main()
{
    // 학습: 클래스는 설계도, c는 그 설계도로 찍어낸 실물(객체/인스턴스)
    circle c;
    c.r = 10;
    cout << c.calcarea() <<endl;
    return 0;
}