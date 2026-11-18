#include <iostream>
using namespace std;

class MyArray{
public:
    int size;
    int* data; // 포인터변수

    MyArray(int size)
    {   
        this->size = size;
        data = new int[size]; 
    }
    ~MyArray()
    {
        if(data != NULL){
            delete[] this->data;
        } //동적메모리 반환
    }

};