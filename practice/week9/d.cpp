
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Student
{
private:
    string name;
    int score;

public:

    // 1. 생성자 작성
    // 이름과 점수를 매개변수로 받는다.
    // this를 사용해서 멤버 변수를 초기화한다.
    //코드작성
    Student(string n, int s){
        this->name=n;
        this->score=s;
    }



    // 2. 점수를 반환하는 함수
    // 함수 이름: getScore
    // 반환형: int
    //코드작성
    int getScore(){
        return score;
    }



    // 3. 학생 정보를 출력하는 함수
    // 출력 형식: 이름: Kim, 점수: 85   
    //코드작성
    void printStudentInfo(){
        cout << "이름: " << name << "     점수: " << score << endl;
    }

};


// 4. 비교 함수 Compare 작성
// 점수가 높은 학생이 먼저 오도록 한다.
// 두 Student 객체를 참조로 전달한다.
// 반환형은 bool
// getScore()를 활용할 것.
//코드작성
bool Compare(Student& a, Student& b){
        return a.getScore() > b.getScore();
}



int main()
{
    // 5. Student 객체를 저장할 vector 생성
    // 이름은 students
    //코드작성
    vector <Student> students;


    // 6. 다음 세 학생을 vector에 추가
    // Kim: 85점
    // Park: 92점
    // Lee: 78점
    // push_back() 사용
    //코드작성

    students.push_back(Student("Kim",85));
    students.push_back(Student("Park",92));
    students.push_back(Student("Lee",78));




    // 7. sort()를 사용해 점수 내림차순 정렬
    // Compare 함수를 세 번째 인자로 전달
    //코드작성

    sort(students.begin(),students.end(),Compare);


    // 8. 정렬된 학생 정보 출력
    // auto& 를 사용하는 범위 기반 for문
    //코드작성

    for(auto& a : students){
        a.printStudentInfo();
    }


    return 0;
}
