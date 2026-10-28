/*==========================================================
 [배울 점] this-> 와 객체 배열 — 객체도 배열이 된다
 --------------------------------------------------------
  - this->title = title; — 멤버 title과 매개변수 title 이름이 부딪칠 때 this-> 가 '내 멤버'라고 분리
  - Book books[2] = { Book(...), Book(...) }; 객체 배열도 각 원소마다 생성자가 돈다
  - for(Book& b : books) 참조 순회 — 복사 없이 원본에 접근 (읽기 전용이라도 효율)
==========================================================*/
#include <iostream>
#include <string>
using namespace std;

class Book
{
    string title;
    int price;

public:
    Book(string title, int num){
        // 학습: 이름 충돌 해결 — this는 '나자신 객체'. 안 붙이면 매개변수가 우선
        this->title = title;  //이름이 같을떄는!
        price = num;    //num을 price에넣어줘!
    }
    void printbook(){
        cout << "제목 : " << title << " 가격 : "<< price << endl;
    }
};

int main()
{
    // 학습: 객체의 배열. 각 원소가 생성자를 거치며 초기화된다
    Book books[2] = {
        Book("어서와 c++", 25000), 
        Book("어서와 c", 26000)
    };

    cout << "소장하고 있는 책 정보" << endl;
    cout << "***************************"<< endl;
    // 학습: & 붙인 순회 = 복사 없는 원본 접근. 출력만 해도 관습적으로 &
    for(Book& b : books)
        b.printbook();
    cout << "***************************"<< endl;

    return 0;
}