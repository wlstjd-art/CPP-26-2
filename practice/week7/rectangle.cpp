#include <iostream>
using namespace std;

class Rectangle {
    // 접근 지정자를 쓰지 않으면 기본적으로 private
    // 그래서 width, height는 클래스 바깥에서 직접 접근할 수 없음
    int width, height;

public:
    // 아래 세 함수는 클래스 바깥에서 내용을 작성할 거라고 미리 선언
    Rectangle(int w, int h);  // 생성자 선언
    ~Rectangle();             // 소멸자 선언
    int CalcArea();           // 넓이를 계산하는 함수 선언
};

// Rectangle 클래스의 생성자 정의
// :: 는 "이 함수가 Rectangle 클래스에 속한다"는 뜻
Rectangle::Rectangle(int w, int h)
{
    cout << "생성자 호출!" << endl;

    // 전달받은 값을 객체의 멤버 변수에 저장
    width = w;
    height = h;
}

// Rectangle 클래스의 소멸자 정의
// 객체가 사라질 때 자동으로 호출됨
Rectangle::~Rectangle()
{
    cout << "소멸자 호출!" << endl;
}

// Rectangle 클래스의 CalcArea 함수 정의
int Rectangle::CalcArea()
{
    // 이 객체의 가로와 세로를 곱해 결과를 돌려줌
    return width * height;
}

int main()
{
    // Rectangle 객체 r을 만듦
    // 가로 3, 세로 4를 전달하므로 생성자가 자동으로 호출됨
    Rectangle r{3, 4};

    // r의 CalcArea 함수를 호출해 넓이 12를 출력
    cout << "사각형의 넓이 : " << r.CalcArea();

    // main을 끝내기 직전, 지역 객체 r이 사라지면서
    // 소멸자가 자동으로 호출됨
    return 0;
}