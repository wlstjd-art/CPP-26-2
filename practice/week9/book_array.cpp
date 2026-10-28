#include <iostream>
#include <string>
using namespace std;

class Book
{
    string title;
    int price;

public:
    Book(string name, int num){
        title = name;
        price = num;
    }
    void printbook(){
        cout << "제목 : " << title << " 가격 : "<< price << endl;
    }
};

int main()
{
    Book books[2] = {
        Book("어서와 c++", 25000), Book("어서와 c", 26000)
    };

    cout << "소장하고 있는 책 정보" << endl;
    cout << "*********************"<< endl;
    for(Book& b : books)
        b.printbook();
    cout << "*********************"<< endl;

    return 0;
}