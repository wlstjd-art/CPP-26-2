#include <iostream>

using namespace std;

class Time{

    public:
        int hour;
        int minute;
    Time(){}//오버로딩 //Time a;를 가능케해줌;
    Time(int h, int m){
        hour = h;
        minute = m;
    }

    void printtime(){
        cout << hour << " : " << minute << endl;
    }
};

int main(){

    Time a;
    Time b{10,20};
    Time c{10,40};
    Time d{10,50};
    
    a.printtime();
    b.printtime();
    c.printtime();
    d.printtime();

    return 0;
}