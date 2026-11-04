#include <iostream>
using namespace std;

class Dog{
    private:
        string name;
        int age;

    public:
        Dog(int a,string n){
            cout << "생성자 호출\n";
            this -> age = a;
            this -> name = n;
            cout << name << "(" << age << ")" << endl;
        }
        ~Dog(){
            cout << "소멸자 호출\n";
        }

};
int main(){
    Dog * pDog = new Dog(10,"바둑이");
    delete pDog;


    return 0;
}