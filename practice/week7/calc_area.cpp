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
double circle::calcarea()
{
    return 3.14 * r * r;
}

int main()
{
    circle c;
    c.r = 10;
    cout << c.calcarea() <<endl;
    return 0;
}