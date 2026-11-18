#include <iostream>
using namespace std;

class Shape{
    int x, y;
    public:
        void SetX(int x){
            this->x = x;
        }
        void SetY(int y){
            this->y = y;
        }
};
class Rectangle : public Shape{
    int width, height;

    public:
        void SetWidth(int w){
            this->width = w;
        }
        void SetHeight(int h){
            this->height = h;
        }
        int GetArea(){
            return (width * height);
        }
};
int main(){
    Rectangle r;

    r.SetWidth(5);
    r.SetHeight(6);

    cout << "사각형의 면적: " << r.GetArea() << endl;

    return 0;
}