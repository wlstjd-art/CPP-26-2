/*==========================================================
 [배울 점] vector의 기본 3종 세트: push_back / back / pop_back
 --------------------------------------------------------
  - push_back으로 계속 더하면 크기가 자동으로 늘어난다 — C 고정 배열과 작별하는 이유
  - back()으로 마지막을 보고 pop_back()으로 버리기 — pop은 반환값이 void라는 점 주의
  - empty()!=true 도 !v.empty()로 쓸 수 있다는 비교 학습
==========================================================*/
#include <vector>
#include <iostream>
using namespace std;

int main(){
    vector<int>v1;

    // 학습: 크기 걱정 없이 마지막에 추가 — vector의 존재 이유
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);


    cout << "v1 = "; 
    for (auto& e : v1){
        cout << e << " ";

    }
    cout << '\n';

    cout << "삭제요소 : ";
    // 학습: 빌 때까지 역순 출력(50,40,30...) — LIFO 경험
    while (v1.empty()!=true){
        cout << v1.back() << " ";
        v1.pop_back();
    }
    return 0;


}