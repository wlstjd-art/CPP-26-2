#include <iostream>
using namespace std;
class RemoteControl{
public:
    //순수 가상함수 정의
    virtual void TurnOn() = 0; //가전 제품을 켠다
    virtual void TurnOff() = 0; // 가전 제품을 끈다
};
//TV 클래스 정의
class Television: public RemoteControl{
public:
    void TurnOn() override{
        cout << "TV를 켭니다." << endl;
    }
    void TurnOff() override{
        cout << "TV를 끕니다." << endl;
    }

};
// 냉장고 클래스 정의
class Refrigerator: public RemoteControl{
public:
    void TurnOn() override{
        cout << "냉장고를 켭니다." << endl;
    }
    void TurnOff() override{
        cout << "냉장고를 끕니다." << endl;
    }
};
int main(){
    //tv를 켜고 끄는 동작을 인터페이스를 통해 수행
    RemoteControl* remoteTV = new Television();
    remoteTV->TurnOn(); //티비 켬
    remoteTV->TurnOff(); //티비 끔

    //냉장고를 켜고 끄는 동작을 인터페이스를 통해 수행
    RemoteControl* remoteRefrigerator = new Refrigerator();
    remoteRefrigerator->TurnOn();   //냉장고 켬
    remoteRefrigerator->TurnOff();  //냉장고 끔

    delete remoteTV, remoteRefrigerator;
    return 0;
}