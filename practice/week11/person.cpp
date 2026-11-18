#include <iostream>
using namespace std;


class Person
{
public:
    int age;
    Person(int a){age = a;
    cout << "생성자 호출"<< endl;}
};

int main(){

    Person Kim(21);
    Person clone{Kim};

    cout << "kim의 나이" << Kim.age << "clone의 나이" << clone.age << endl;
    Kim.age = 23;
    cout << "kim의 나이" << Kim.age << "clone의 나이" << clone.age << endl;

    return 0;
}