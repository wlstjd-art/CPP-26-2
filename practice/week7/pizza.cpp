/*==========================================================
 [배울 점] 하나의 설계도, 여러 실물 — 각 객체는 독립 데이터
 --------------------------------------------------------
  - Circle pizza1, pizza2; 한 줄에 두 객체 선언 — 설계도(Circle)는 하나, 실물은 두 개
  - pizza1과 pizza2는 radius/color를 따로 가지지만 calarea() 로직은 공유한다
  - '같은 클래스 = 같은 행동, 다른 객체 = 다른 상태'라는 객체지향의 핵심 문장
==========================================================*/
#include <iostream>
using namespace std;

class Circle
{
    public:
        int radius;
        string color;
        
        double calarea()
        {
            return 3.14 * radius * radius;
        }
};

int main()
{
    // 학습: 쉼표로 여러 객체 선언. 각자 radius를 따로 갖는 게 핵심
    Circle pizza1, pizza2;

    pizza1.radius = 100;
    pizza1.color = "yellow";
    cout << "피자의 면적 : " << pizza1.calarea() << endl;
    
    // 학습: pizza1에 영향 없이 pizza2만 바뀐다 — 객체별 독립 상태
    pizza2.radius = 200;
    pizza2.color = "white";
    cout << "피자의 면적 : " << pizza2.calarea() << endl;
    
    return 0;
}

