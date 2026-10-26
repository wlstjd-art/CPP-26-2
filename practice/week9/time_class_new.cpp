#include <iostream>
using namespace std;

class Time
{
    private:   //class 내에서만 접근가능
        int hour;
        int minute;
    public:
        Time(int h, int m);
        void IncHour();
        void Print();


    int GetHour()   {return hour;}
    int GetMinute() {return minute;}
    void Sethour(int h){
        hour = h;
    }
    void Setminute(int m){
        minute = m;
    }
};
Time::Time(int h, int m){
    hour = h;
    minute = m;
}
void Time::IncHour(){
    ++hour;
    if(hour > 23)
        hour = 0;
}
void Time::Print(){
    cout << hour << ":" << minute << endl;
}
int main(){

    Time a{0,0};
   // a.hour = 10;
    a.Sethour(10);
    a.Sethour(6);
    a.Setminute(30);

    a.Print();
    return 0;
}