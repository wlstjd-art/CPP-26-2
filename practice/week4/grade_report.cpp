/*==========================================================
 [배울 점] 2차원 배열 = 표, 그리고 병렬 배열 기법
 --------------------------------------------------------
  - scores[학생][과목] — 행과 열로 이루어진 표 데이터는 2차원 배열로 담는다
  - studentname[i] 와 scores[i] 가 같은 인덱스 i로 짝을 이루는 '병렬 배열' 패턴 (select_customer.cpp에도 등장)
  - 누산기(sum)를 학생 루프 안에서 초기화하는 위치 감각 — 밖으로 빼면 다음 학생에까지 합이 넘친다
==========================================================*/
#include<iostream>
#include <string>

int main(){
    const int student = 5;
    const int subject = 3;
    // 학습: 2차원 배열. scores[i][j] = i번 학생의 j번 과목 — 좌표처럼 읽기
    int scores [student][subject];

    // 학습: 이름 배열과 점수 배열을 인덱스로 묶는 병렬 배열
    std::string studentname[student]={"영수","영희","철수","미미","쥬쥬"};
    std::string subjectname[subject] = {"수학","국어","영어"};

    for(int i = 0; i<student;i++){
        std::cout<<studentname[i]<<"의 성적을 하나씩 입력하세요.\n ";
            for(int j = 0; j<subject; j++){
                std::cout <<subjectname[j] <<":" ;
                std::cin >> scores [i][j];
            }
        }

    for(int i = 0 ; i<student;i++){
        std::cout <<studentname[i]<<"의 평균 점수는";
        // 학습: 학생마다 새로 초기화 — 초기화 위치가 로직의 정확도를 결정한다
        double sum = 0;
        double average = 0;
        for (int j = 0 ; j <subject; j++){
            sum +=scores[i][j];
        }
        average = sum /subject;
        std::cout <<average <<"입니다."<<'\n';

    }
        return 0;
    }




