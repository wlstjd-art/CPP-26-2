#include <iostream>
using namespace std;
int main(){

    int num = 10;
    char grade = 'a';
    string food = "pizza";
    
    int* pNum = &num;
    char* pGrade = &grade;
    string* pFood = &food;

    cout << pNum << endl;
    cout << *pNum << endl;
    
/*     cout << pGrade << endl;
    cout << *pGrade << endl; */

    cout << pFood << endl;
    cout << *pFood << endl;
    
    pNum += 1;   //p라는 포인터변수 자기 자신타입의 사이즈만큼 가르키는 주소 위치를 바꿈!!!! 4바이트!!!
    pGrade += 1; //1바이트!
    pFood += 1;

    cout << pNum << endl;
    cout << *pNum << endl;
    
/*     cout << pGrade << endl;
    cout << *pGrade << endl; */

    cout << pFood << endl;
    cout << *pFood << endl;
    
    return 0;
}