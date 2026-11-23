#include <iostream>
using namespace std;

class MyArray {
public:
    int size;
    int* data;

    MyArray(int size) {   
        this->size = size;
        data = new int[size]; 
    }
    ~MyArray() {
        if(data != NULL) {
            delete[] this->data;
        }
    }
};

int main() {
    MyArray arr(5);
    return 0;
}
