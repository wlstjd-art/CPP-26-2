#include <iostream>

using namespace std;

class Complex {
    public:
double real, imag;
    Complex(double r = 0, double i = 0){
        real = r;    imag = i;
        cout << "생성자 호출";
        Print();  
    }  
    ~Complex(){
        cout << "소멸자 호출";
        Print();
    }
    void Print(){
        cout << real << "+" << imag << "i" << endl;
    }
};

/* Complex Add(Complex& a, Complex& b)
{   
    Complex t;
    t.real = a.real + b.real;
    t.imag = a.imag + b.imag;

    return t;
} */

Complex Add(Complex* a, Complex* b)
{   
    Complex t;
    t.real = (*a).real+b->real;
    t.imag = a->imag + b->imag;
    return t;
}


int main()
{
    Complex c1{1,2},c2{3,4}; //생성자 호출1+2i 생성자 호출3+4i
    Complex t; // 생성자 호출 00 
    // t = Add(c1,c2);  //add 내부에 complex t 생성자호출! 00
    t = Add(&c1, &c2);
    t.Print();
    return 0;
}