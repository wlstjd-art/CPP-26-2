#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout << "주민번호를 입력하세요: ";
    cin >> s;

    cout << "-가 제거된 주민번호: ";
    for (char c : s)
    {
        if(c == '-')
        {
            continue;
        }
        cout << c;
    }
    cout << endl;

    return 0;
}