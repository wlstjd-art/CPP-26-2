/*==========================================================
 [배울 점] 2차원 배열 전체 탐색 — 값과 좌표를 함께 추적하기
 --------------------------------------------------------
  - 행/열 이중 for문으로 표 전체를 훑는 전수 탐색(full search)
  - 최댓값 '값'만 아니라 '위치(maxI, maxJ)'까지 함께 갱신 — 검색 결과에 좌표 붙이기
  - ⚠ maxI/maxJ를 초기화하지 않아 (0,0)이 최댓값이면 값이 보증되지 않은 채 출력됨 — maxI=maxJ=0으로 고치자
==========================================================*/
#include <iostream>
#include <stdlib.h>

int main(){
    const int numcell = 10;
    int numlist[numcell][numcell];
    
    for(int i = 0; i<numcell;i++){
        for(int j = 0; j <numcell ; j++){
            int a = rand() %1000;
            numlist[i][j] = a;
            std::cout<<i<<","<<j<<":"<<numlist[i][j]<<'\n';
        }
        
    }
    std::cout <<'\n';

    int max;
    int maxI;
    int maxJ;
    // 학습: 기준점을 모서리로 세우고 테이블 전체를 돌아다닌다
    max = numlist[0][0];

    for(int i=0;i<numcell;i++){
        for(int j=0;j<numcell;j++){
            if(numlist[i][j]>max){
                max = numlist[i][j];
                // 학습: 값을 갱신하는 순간 좌표도 같이 갱신 — 최대/최소 좌표 추적의 본질
                maxI=i;
                maxJ=j;
            }

        }
    }
    std::cout <<"가장 큰 값은"<<max<<"이고,"<<"i와 j는 각각 "<<maxI<<","<<maxJ<<"입니다.";



}