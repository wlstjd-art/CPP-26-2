#include <iostream>
using namespace std;

class circle
{
public:
    int x,y;
    int radius;
    circle(){
        x = 0;
        y = 0;
        radius = 0;

    }
    circle(int x, int y, int r){
        x = x;
        this->y = y;
        this->radius = r;

    }

    void Print(){
        cout << "반지름 : "<< radius << ", " << x << ", " << y << endl;
    }

};

int main()
{
    circle objarray[10];
                                 //참조자 안하
    for(circle& c:objarray){
        c.x = rand()%500;
        c.y = rand()%300;
        c.radius = rand()%100;

    }
    for(circle c: objarray)
        c.Print();
    
        return 0;
}