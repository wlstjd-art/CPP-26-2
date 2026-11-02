
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int score;

public:

    // 1. 기본 생성자
    // name = "Unknown", score = 0
    // 코드작성
    Student(){
        name = "unknown";
        score = 0;
    }


    // 2. 매개변수 생성자
    // 이름과 점수를 전달받을 것
    // this를 사용하여 초기화
    // 코드작성
    Student(string name, int s){
        this->name = name;
        score = s;
    }


    // 3. 이름과 점수를 출력하는 함수
    // 출력 예시: 이름: Kim, 점수: 85
    // 코드작성
    void printstudent(){
        cout << "이름: " << name << ", 점수: " << score << endl;
    }


    // 4. 합격 여부를 반환하는 함수
    // 60점 이상이면 true, 아니면 false
    // 반환형은 bool
    // 코드작성
    bool testpass(){
        return score >= 60 ? 1 : 0;
    }

};

int main()
{
    // 5. 기본 생성자로 학생 s1 생성
    // 코드작성
    Student s1;


    // 6. 이름이 "Kim", 점수가 85인 s2 생성
    // 코드작성
    Student s2("Kim", 85);

    // 7. 두 학생의 정보 출력
    // 코드작성
    s1.printstudent();
    s2.printstudent();

    // 8. s1과 s2의 합격 여부 출력
    // true면 "합격", false면 "불합격"
    // 코드작성
    if(s1.testpass()){
        cout << "합격" << '\n';
    }
    else
        cout << "불합격" << '\n';

    if(s2.testpass()){
        cout << "합격" << '\n';
    }
    else
        cout << "불합격" << '\n';


    return 0;
}
