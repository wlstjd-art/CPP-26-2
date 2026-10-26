#include <iostream>
using namespace std;

class Time{
    public:
    int hour;
    int minute;

    Time(int h=0, int m=0){
        hour = h;
        minute = m;
    }
    void print(){
        cout << hour << ":" << minute << endl;
    }
};

int main()
{
    Time a;
    Time b(10,30);
    Time c{10,40};
    Time d = {10,50};

    b.print();
    c.print();
    d.print();
    return 0;

}