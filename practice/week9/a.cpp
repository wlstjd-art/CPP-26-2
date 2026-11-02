
#include <iostream>
using namespace std;

class Circle
{
private:
    int x, y;
    int radius;

public:

    // 1. 기본 생성자
    //코드작성
    Circle(){
        x=0,y=0,radius=0;
        
    }


    // 2. 매개변수 3개를 받는 생성자
    //    x, y, radius를 초기화하시오.
    //    this를 사용할 것.
    //코드작성
    Circle(int x, int y, int r){
        this->x = x;
        this->y = y;
        radius = r;
    }



    // 3. 원의 정보를 출력하는 멤버 함수
    //    출력 형식: 중심=(x, y), 반지름=radius
    //코드작성
    void PrintCircle(){
        cout << "중심=(" << x << "," << y << "), 반지름=" << radius <<endl;
    }
};

int main()
{
    // 4. 기본 생성자를 이용해 c1 생성
    //코드작성
    Circle c1;


    // 5. 매개변수를 전달해 c2 생성
    //    중심 좌표는 (10, 20), 반지름은 5
    //코드작성
    Circle c2{10,20,5};

    // 6. 두 객체의 정보 출력
    //코드작성
    c1.PrintCircle();
    c2.PrintCircle();

    return 0;
}
