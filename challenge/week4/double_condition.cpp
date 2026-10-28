/*==========================================================
 [배울 점] 중첩 if-else — 2x2 조건 트리를 만드는 법
 --------------------------------------------------------
  - 바깥 if가 num1을, 안쪽 if가 num2를 검사해 4갈래로 나눠가는 조건 트리 구조
  - else if(num1<0) 체인으로 양수/음수/0을 구분하려는 시도
  - ⚠ num1==0이면 어느 출력도 안 된다 — 누락 가지를 채우는 게 이 파일의 연습 문제
==========================================================*/
#include <iostream>


int main(){

    int num1,num2;
    std::cout <<"Enter num 1 and num 2 : ";
    std::cin >>num1>>num2;

    // 학습: 조건을 단계적으로 좁혀가는 중첩 — 트리 구조로 그림을 그려보자
    if(num1>0){
        if(num2>0){
            std::cout <<"both number is greather than 0"<<'\n';

        }
        else{
            std::cout << "only num 1 is greather than 0"<<'\n';
        }

    }
    // ⚠ num1이 정확히 0이면 아무 출력도 없다. 0일 경우까지 채워보자
    else if(num1<0){
        if(num2<0){
            std::cout << "both number is less than 0"<<'\n';
        }
        else{
            std::cout << "only num 2 is greather than 0"<<'\n';

        }
    }





}