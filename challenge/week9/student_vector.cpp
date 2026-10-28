/*==========================================================
 [배울 점] 센티널(-1) 입력 수집 + double 캐스트로 정확한 평균
 --------------------------------------------------------
  - while(true) + if(score==-1) break — 미리 약속한 종료 값으로 종료하는 센티널 패턴
  - 정답 개수를 미리 모르는 성적 데이터를 vector에 모으기 — '동적 배열'의 존재 이유 실감
  - (double)sum / scores.size() 명시적 캐스트로 정수 나눗셈 회피 — grade_mean.cpp의 함정 비교
  - ⚠ -1을 먼저 입력하면 size()==0 → 0으로 나누기 발생. 빈 입력 가드를 추가해보자
==========================================================*/
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> scores;    //int 동적배열생성
    int i, sum = 0;

    // 학습: 종료를 값(-1)으로 알리는 센티널 루프 — 입력 개수 불확실할 때 표준
    while(true){
        int score;
        cout << "성적을 입력하세요 (종료는 -1): ";
        cin >> score;
        if(score == -1) break;
        // 학습: 개수를 모르는 데이터 축적 — vector 없이는 불가능했던 것
        scores.push_back(score);
    }
    for(auto& value:scores){
        sum +=value;
    }
    // 학습: double로 캐스트해야 소수점 평균이 산다. int/int면 버림
    double avg = (double)sum/scores.size();
    cout << "성적 평균 : "<< avg << endl;

    return 0;
}