/*==========================================================
 [배울 점] 입력(cin)과 출력(cout)의 기본 짝
 --------------------------------------------------------
  - std::cin >> 는 사용자가 입력하고 Enter를 누를 때까지 기다렸다가 변수에 저장한다
  - cin은 공백(칸/줄바꿈)에서 끊긴다 — 'John Smith'를 입력하면 'John'만 들어간다
  - 문장 전체를 받고 싶으면 getline (practice/week4/dowhile.cpp에 예제 있음)
==========================================================*/
#include <iostream>

int main(){

    std::string name;
    std::cout <<"Enter your name: ";
    // 학습: >> 는 공백 전까지만 읽는다. 공백 포함 입력은 getline의 몫
    std::cin >> name;
    std::cout << "Welcome "<<name;


    return 0;
}