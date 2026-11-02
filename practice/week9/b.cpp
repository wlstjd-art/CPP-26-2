#include <iostream>
using namespace std;

class Rectangle
{
private:
 int width; // 가로
 int height; // 세로

public:

 // 1. 기본 생성자
 // 가로, 세로를 1로 초기화하시오.
 //코드작성
    Rectangle(){
        width = 1;
        height = 1;
    }
 // 2. 매개변수 2개를 받는 생성자
 // width, height를 초기화하시오.
 // this를 사용할 것.
 //코드작성
    Rectangle(int width, int height){
        this->width = width;
        this->height = height;
    }

 // 3. 사각형 정보를 출력하는 멤버 함수
 // 출력 형식: 가로=width, 세로=height
 //코드작성
    void printRec(){
        cout << "가로=" << width << "세로=" << height << endl;
    }

 // 4. 넓이를 계산해서 돌려주는 멤버 함수
 // 이름은 getArea로 하고, 넓이(가로×세로)를 return 하시오.
 //코드작성
    int getArea(){
        return width * height;
    }
};

int main()
{
 // 5. 기본 생성자를 이용해 r1 생성
 //코드작성
    Rectangle r1;

 // 6. 매개변수를 전달해 r2 생성
 // 가로는 4, 세로는 3
 //코드작성
    Rectangle r2(4,3);
 // 7. 두 객체의 정보 출력
 //코드작성
    r1.printRec();
    r2.printRec();

 // 8. r2의 넓이를 출력
 // 출력 형식: 넓이=12
 //코드작성
    cout << "넓이=" << r2.getArea();

 return 0;
}