#include <iostream>

int main(){

    const int students = 5;
    int scores[students];   //배열의 크기안에는 변하면안도!!
    int sum =0;
    int i, average;

    for(int i = 0; i <students; i++){
        std::cout <<"학생들의 성적을 입력하세요 : ";
        std::cin >> scores[i];
        sum += scores[i];
    }
    foreach(){
        std::cout
    }
    

    average = sum /students;
    std::cout <<"성적 평균 = "<<average << '\n';
    return 0;



}