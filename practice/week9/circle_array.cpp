#include <iostream>

using namespace std;

class Circle
{
    public:
    int x, y;
    int radius;
    Circle(){   //기본생성자   Circle c1;가능
        x = 0; y = 0; radius = 0;
    }
    Circle(int x, int y, int r){
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