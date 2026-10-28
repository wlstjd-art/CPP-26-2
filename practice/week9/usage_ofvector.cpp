/*==========================================================
 [배울 점] auto& 와 auto — 한 글자(&)가 결과를 바꾼다
 --------------------------------------------------------
  - for(auto& n : fibonacci): n은 원소 자체를 참조 → n++가 vector 내용을 실제로 바꾼다
  - for(auto n : fibonacci): n은 복사본 → 여기서 건드리면 원본은 무사
  - 첫 루프 후 값이 0~5 → 1~6으로 바뀐 채 두 번째 루프에 보이는 게 증거 — 참조/값의 결과를 눈으로 볼 수 있는 최고의 예제
==========================================================*/
#include <vector>
#include <iostream>
using namespace std;

int main(){

    vector <int> fibonacci {0,1,2,3,4,5};

    // 학습: & = 참조. n++가 원본 벡터를 수정한다
    for (auto& n : fibonacci){
        cout << n << " ";
        n++;
    }
    cout << endl;
    // 학습: 복사본이라 읽기 전용. 이전 루프의 수정 결과가 그대로 보인다
    for (auto n : fibonacci){
        cout << n << ' ';
    }
    cout << endl;

    return 0;
}