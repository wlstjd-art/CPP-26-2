#include <iostream>
#include <vector>
using namespace std;

const float PI = 3.141592;

class Circle{

public:
    int x,y;
    int radius;
    Circle(){x = 0; y = 0; radius = 0;}
    Circle(int x, int y){
        this->x = x;
        this->y = y;
    }
    Circle(int x, int y, int r){
        this->x = x;
        this->y = y;
        radius = r;
    }
    void PrintC(){
        cout << "반지름 : " << radius << endl;
        cout << "중심 : " << "(" << x << " , " << y << ")" << endl;
    }
    void printA(){
        float Area = radius * radius * PI;
        cout << "넓이 : " << Area << endl; 
    }
    void printD(){
        cout << "둘레 : " << 2 * PI * radius << endl;
    }
};
int main(){

    Circle c1{3,4,10};

    c1.PrintC();
    c1.printA();
    c1.printD();

    return 0;
}