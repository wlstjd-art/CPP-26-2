/*==========================================================
 [배울 점] 클래스 안에서 바로 정의하기
 --------------------------------------------------------
  - calcarea()처럼 짧은 함수는 클래스 안에서 몸체까지 쓰면 자동으로 inline 후보가 된다
  - calc_area.cpp(선언만/외부 정의)와의 비교 — 두 방식 모두 합법이고 결과도 같다
  - obj.radius = 100; public 멤버라면 데이터를 직접 넣을 수도 있다
==========================================================*/
#include <iostream>
using namespace std;

class Circle
{
    public:
        int radius;
        string color;

        // 학습: 클래스 안 몸체 정의. 밖에서 정의한 calc_area.cpp와 동작은 같고 취향 차이
        double calcarea()
        {
            return 3.14 * radius * radius;
        }
};

int main()
{
    Circle obj;

    // 학습: public 멤버는 이렇게 객체가 '상태'를 담는 그릇으로 쓰인다
    obj.radius = 100;
    obj.color = "blue";

    cout << "원의 면적: " << obj.calcarea() << endl;
    return 0;
    
}