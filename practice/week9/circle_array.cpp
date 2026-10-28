/*==========================================================
 [배울 점] 기본 생성자의 존재 이유 + 참조/값 순회의 결정적 차이
 --------------------------------------------------------
  - Circle objArray[10]; 은 인수를 넘길 방법이 없으므로 '인수 없는 생성자'가 반드시 있어야 컴파일된다
  - 쓰기 루프는 for(Circle& c : ...) — 참조라 원본이 바뀐다
  - 읽기 루프는 for(Circle c : ...) — 복사본이라 원본 안전. 파일 자체 코멘트로까지 남겨둔 좋은 실험
  - rand()%500 식의 범위로 화면 좌표를 흉내내는 게임 프로그래밍 감각
==========================================================*/
#include <iostream>

using namespace std;

class Circle
{
    public:
    int x, y;
    int radius;
    // 학습: 기본 생성자가 있어야 Circle 배열[10]이 만들어진다 — 존재 이유 그 자체
    Circle(){   //기본생성자   Circle c1;가능
        x = 0; y = 0; radius = 0;
    }
    Circle(int x, int y, int r){
        // 학습: 멤버/매개변수 이름 같음 → this-> 로 '내 x'라고 선언
        this->x = x;      //이름 같을땐 this로! 
        this->y = y;
        radius = r;
    }
    void Print(){
        cout << "반지름: " << radius << " @(" << x << ", " << y << ")" << endl;
    }

};
int main(void){

    Circle objArray[10];
                            //circle c가 배열의 원본객체가아니라 복사본을만든다! 
    // 학습: &라서 원본 수정. & 없으면 복사본만 random 값으로 더러워진다
    for(Circle& c : objArray){
        c.x = rand() % 500;         
        c.y = rand() % 300;         
        c.radius = rand() % 200;
    }
    for(Circle c : objArray){
        c.Print();
    }

    return 0;
}