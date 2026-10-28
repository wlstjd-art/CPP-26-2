/*==========================================================
 [배울 점] 문자열을 다루는 함수 + 입력 검증 반복 패턴
 --------------------------------------------------------
  - tolowerstr/toupperstr: 값으로 복사해서 고쳐 반환 — 원본을 안 망가뜨리는 순수 함수 스타일
  - for(char& a : str): &가 붙은 참조라 제자리 수정이 가능. 복사 없이 빠른 순회
  - while(true) + 유효할 때 break: 조건을 만족할 때까지 되묻는 '입력 검증' 패턴
  - 해밍 거리 정의(같은 위치에서 글자가 다른 개수)과 선행 조건(길이 동일) 검증도 배운다
==========================================================*/
#include <iostream>
#include <string>
using namespace std;

// 학습: 값으로 복사 → 복사본만 수정 → 반환. 원본 안전 패턴
string tolowerstr(string str)
{
    // 학습: char& 참조로 순회하면 str 자체를 고칠 수 있고 복사도 없다
    for(char& a : str)
    {
        a = tolower(a);
    }
    return str;
}
string toupperstr(string str)
{   
    for(char& a : str)
    {
        a = toupper(a);
    }
    return str;
}
int main()
{
    string s1, s2;
    int count = 0;

    // 학습: 무한 루프 + 정상 입력일 때만 break — 다시 묻기의 표준 형태
    while(true)
    {

    cout << "DNA1: ";
    cin >> s1;
    cout << "DNA2: ";
    cin >> s2;

    // 학습: 계산 전 '계산 가능 조건'을 먼저 검증하는 습관
    if(s1.length() != s2.length())
        cout << "오류:길이가 다름!" <<endl;
    else
    {
        for(int i = 0; i <s1.length();i++)
        {
            if(s1[i] !=s2[i])
                count = count + 1;
        }
        cout << "해밍 거리는 " << count << endl;
        break;
    }
    }
    return 0;
}