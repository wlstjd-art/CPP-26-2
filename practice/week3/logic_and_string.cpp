/*==========================================================
 [배울 점] string을 == 로 비교해도 되는 이유
 --------------------------------------------------------
  - char는 작은따옴표 'a', string은 큰따옴표 "good" — 완전히 다른 타입
  - C에서는 strcmp를 썼지만 std::string은 연산자 == 가 오버로딩되어 내용 비교를 해준다 (week9/vector$operator.cpp에서 다시 등장)
  - s2 값을 바꾸면 (s1==s2) 결과도 바뀐다 — bool 값을 관찰하는 좋은 실험
==========================================================*/
#include <iostream>
#include <string>

int main(){


    // 학습: 문자 1개(char)와 문자열(string)은 타입부터 다른 별개 존재
    char c1 ='a';
    char c2{'b'};
    std::string s1 = "good";
    std::string s2 = "bad";
    // 학습: string 클래스가 operator== 를 오버로딩해놓아서 내용 비교가 된다
    bool b = (s1 == s2);
    std::cout << b << '\n';

    s2 = "good";
    //s2 = "morning";

    b=(s1==s2);
    std::cout <<b<<'\n';



}