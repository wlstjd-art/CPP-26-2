#include<iostream>
#include <string>

int main(){
    const int student = 5;
    const int subject = 3;
    int scores [student][subject];

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




