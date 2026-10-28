#include <iostream>
using namespace std;

class Time{
    private:
        int hour;
        int minute;
    public:
        Time(int h, int m);
        void IncHour();
        void Print();

        int gethour(){return hour;}
        int getminute(){return minute;}
        void sethour(int h){hour = h;}
        void setminute(int m){minute = m;}        
};

Time::Time(int h, int m){    //외부서 작성!!!
    hour = h;
    minute =  m;
}
void Time::IncHour(){       //외부서 작성!!
    ++hour;
    if(hour > 23)
        hour = 0;
}
void Time::Print(){
    cout << hour << " : " << minute << endl;
}

int main(){

    Time a{3 ,4};
    //a.hour = 10;    //에러!! hour 는 private로 class 내에서만 접근가능하다!
    a.sethour(5);
    a.setminute(30);

    a.Print();


    return 0;
}