/*==========================================================
 [배울 점] 상수로 배열 크기 지정 + 버그 2개 찾기 훈련
 --------------------------------------------------------
  - const int students = 5 — 배열 크기에 상수를 넣으면 매직 넘버를 한 곳에서 관리할 수 있다
  - ⚠ 버그①: 합계를 두 번 더하고 있다. 입력 루프에서 이미 sum을 만들었는데 두 번째 루프가 또 더한다
  - ⚠ 버그②: int / int 평균이라 소수점이 버려진다. 진짜 평균은 double이 필요 (student_vector.cpp 비교)
==========================================================*/
#include <iostream>

int main(){

    const int students = 5;
    // 학습: 배열 크기에는 상수(const)가 들어갈 수 있다 — 변수는 안 된다
    int scores[students];   //배열의 크기안에는 변하면안도!!
    int sum =0;
    int i, average;

    for(int i = 0; i <students; i++){
        std::cout <<"학생들의 성적을 입력하세요 : ";
        std::cin >> scores[i];
        // 학습: 입력받으면서 바로 누적 — 루프를 따로 돌지 않아도 되는 효율
        sum += scores[i];
    }
    // ⚠ 버그: 위에서 이미 누적한 sum을 또 더한다(2배). 이 루프 전체가 중복이다
    for (i = 0; i <students; i++){
        sum += scores[i];
    }

    // 학습: int/int는 몫만 — 평균 85.6이 85로 출력되는 이유
    average = sum /students;
    std::cout <<"성적 평균 = "<<average << '\n';
    return 0;



}