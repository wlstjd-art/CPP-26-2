/*==========================================================
 [배울 점] vector 중괄호 초기화와 최소한의 순회
 --------------------------------------------------------
  - vector<int> fibonacci {0,1,1,2,...} — 크기 지정 없이 리스트 그대로 생성
  - for(auto number : fibonacci) 최소 구문 — 배열과 똑같이 쓰면서도 크기가 자동
  - 고정 수열도 vector에 담으면 크기 조회(.size) 등 다른 vector 도구를 그대로 쓸 수 있다
==========================================================*/
#include <vector>
#include <iostream>
using namespace std;

int main(){

    // 학습: 리스트 초기화 — 요소 개수가 곧 크기가 된다
    vector<int> fibonacci { 0, 1, 1, 2, 3, 5, 8, 13 ,21, 34, 55, 89};

    for(auto number : fibonacci)
        cout << number <<' ';

        cout <<  endl;
        return 0;

}