/*==========================================================
 [배울 점] do-while로 만드는 숫자 맞추기 게임
 --------------------------------------------------------
  - srand(time(NULL)) — 매 실행마다 다른 난수를 위한 시드 걸기
  - rand()%10+1 → 1~10 만들기 (범위 공식)
  - do-while 선택의 이유: '일단 한 번은 추측하게' 만들고 나서 판정해야 하므로
  - ⚠ 주석에는 '0~99'라고 적혀 있지만 실제 코드는 0~9 — 주석을 믿지 말고 코드를 읽는 훈련
==========================================================*/
#include <iostream>
#include <time.h>

int main(){
    // 학습: 시간으로 시드를 걸어야 실행할 때마다 다른 정답이 나온다
    srand (time(NULL));

    int guess;
    int tries=0;
    // ⚠ 옆 주석(0~99)은 틀렸다. 실제로는 0~9에 +1 → 1~10. 코드만 진실
    int answer = (rand()%10)+1;   // 0 ~  99   +1
        std::cout <<"Enter your guess between 1~10: ";
    // 학습: 먼저 추측 받고 나중에 조건 보는 do-while이 게임 진행과 정확히 맞물린다
    do{ 
        std::cin >> guess;
        if(guess >answer){
            std::cout <<"Too High"<<'\n';

        }
        else if(guess < answer){
            std::cout << " Too Low"<<'\n';
        }
        tries +=1;

    }while(guess !=answer);
    std::cout << "Your tries is "<<tries;
    

    return 0;
}