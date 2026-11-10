#include <iostream>
using namespace std;
class Pizza {
    int radius;
public:
    Pizza(int r = 0) : radius{r}{}
    ~Pizza(){   }
    void setRadius(int r){radius = r;}
    void Print(){
        cout << "Pizza(" << radius << ")" << endl;
    }
};
void Upgrade(Pizza p){  p.setRadius(20); }

//값이 복사되어들어감.!
void Upgradeto30(Pizza* p){
    (*p).setRadius(30); //오이것도된다
    //근데 자동으로 알아서 p.set하면 p->으로바껴 저 화살표안에서 이 p가 포인터 변수라는걸 갈켜주나봐
}


int main(){
    Pizza obj(10);
    Upgrade(obj);
    obj.Print();
    Upgradeto30(&obj);
    obj.Print();
    return 0;
}