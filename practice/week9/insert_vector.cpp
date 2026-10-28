/*==========================================================
 [배울 점] iterator 삽입 (erase_vector.cpp와 거의 같은 코드)
 --------------------------------------------------------
  - v.begin()+5 = 5번째 인덱스라는 iterator 산술이 핵심
  - 가리킨 자리에 값이 끼어들고 나머지는 오른쪽으로 자동 이동 — 중간 삽입의 대가(밀어내기)
  - 같은 내용을 두 파일로 관리한 것도 교훈: 파일명이 내용을 증명하게 하자
==========================================================*/
#include <vector>
#include <iostream>
using namespace std;

int main(){
        vector<int> v;
    for (int i = 0; i < 10; ++i){
        v.push_back(i);
    }
    cout << "현재의 v = ";
    for (auto& e : v)
        cout << e << " ";
    cout << endl;
    // 학습: 반복자 = 포인터 같은 위치 표시자. +n 연산이 통한다
    auto it = v.begin()+5;
    // 학습: 위치 기반 수정 — vector의 중간 삽입은 원소 이동(O(n))이라는 대가도 생각
    v.insert(it,100);

    cout << " 5번인덱스에 값을 추가한후 v";
    for (auto& e : v)
        cout << e << " ";
    cout << endl;
    return 0;

}
