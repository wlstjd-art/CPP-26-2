#include <iostream>
using namespace std;

class Circle{

private:
    int radius;

public:
    Circle(){radius = 10;}
    ~Circle(){    }
    void setRadius(int r){
        this->radius = r;
    }
    int getRadius(){
        return radius;
    }
};
int main(){

    Circle * p_Cir = new Circle();  //w 






    return 0;
}
