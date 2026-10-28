/*==========================================================
 [배울 점] 이름+나이 병렬 배열과 필터링
 --------------------------------------------------------
  - names[] 와 ages[] 를 같은 인덱스로 묶어 '레코드'를 흉내내는 병렬 배열 (C 시절의 객체 대체품)
  - 입력 → 조건 필터 → 결과 출력 → 0건이면 별도 안내 — 리포팅의 전 과정
  - 일치 인원 카운트(a)로 '한 명도 없음' 분기를 처리하는 마무리 습관
==========================================================*/
#include <iostream>
#include <string>

int main(){
    const int maxpeople=3;
    // 학습: 이름/나이를 같은 인덱스로 묶는 병렬 배열 — C++ 객체 이전의 방법
    std::string names[maxpeople];
    int ages[maxpeople];
    
        for(int j = 0; j<maxpeople; j++){

            std::cout <<"사람 "<<j+1<<"의 이름: ";
            std::cin >>names[j];
            

            std::cout <<"사람 "<<j+1<<"의 나이: ";
            std::cin >>ages[j];
           
        }

    int ageThreshold;
    std::cout<<"특정 나이 이상인 사람을 찾으려면 나이를 입력하세요.";
    std::cin >> ageThreshold;
    std::cout<<ageThreshold<<"이상인 사람들\n";
    int a=0;
    for(int i = 0; i< maxpeople; i++){
        
        // 학습: 조건에 맞는 것만 골라내는 필터 — 검색의 가장 단순한 형태
        if(ages[i]>=ageThreshold){
            
            std::cout << names[i] <<":"<<ages[i]<<" ";
            a++;
        }
    }
    // 학습: '몇 건 걸렸는가'를 세어서 0건 케이스를 정중하게 처리하기
    if(a == 0){
            std::cout << ageThreshold<<"이상의 나이를 가진 고객이 없습니다.";
        }
}