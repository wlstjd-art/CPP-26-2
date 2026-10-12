#include <iostream>
using namespace std;

class Circle
{
    public:
        int radius;
        string color;

        double calcarea()
        {
            return 3.14 * radius * radius;
        }
};

int main()
{
    Circle obj;

    obj.radius = 100;
    obj.color = "blue";

    cout << "원의 면적: " << obj.calcarea() << endl;
    return 0;
    
}