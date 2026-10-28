/*==========================================================
 [배울 점] 함수 오버로딩 + 기본 인수 — 똑똑한 이름 재사용
 --------------------------------------------------------
  - 같은 이름 print를 int/double/string 3개 버전 — 인수의 타입을 보고 컴파일러가 자동 선택
  - C였다면 print_int/print_double/print_string을 따로 만들었다 — 이름 하나로 묶는 법
  - void print(string s = "No Data!") 기본 인수가 obj.print() 같은 '인수 없는 호출'을 살려준다
==========================================================*/
#include <iostream>
#include <string>
using namespace std;

class printdata
{
    public:
    
    // 학습: 세 개의 print는 이름은 같고 시그니처가 다른 별개 함수 — 오버로딩
    void print(int i) {cout << i << endl;}  
    void print(double f) {cout << f << endl;}
    // 학습: 기본 인수 — 호출부가 인수를 생략해도 합법
    void print(string s = "No Data!") {cout << s << endl;}
};

int main()
{
    printdata obj;

    obj.print(1);
    obj.print(3.14);
    obj.print("C++14 is cool.");
    // 학습: 아무것도 안 넣었지만 기본 인수가 있는 string 버전이 실행된다
    obj.print();
    
    return 0;
    
}