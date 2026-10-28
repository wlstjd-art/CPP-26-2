/*==========================================================
 [배울 점] break 없는 case 쌓기 + 입력 끝까지 읽는 루프
 --------------------------------------------------------
  - case a/e/i/o/u에 break 없이 쌓으면 하나의 처리로 같이 넘어간다 (fallthrough 의 선한 활용)
  - while(std::cin >> ch) — 입력이 끊기면(ctrl+z = EOF) cin이 false가 되어 루프 종료. 양을 모르고 받는 패턴
  - 모음 개수 vs 자음 개수를 세는 분류(counting) 프로그램의 원형
==========================================================*/
#include <iostream>
int main(){
    int a = 0;
    int b = 0;
    std::cout <<"Enter a character and type ctrl+z"<<'\n';

    char ch;

    // 학습: cin이 false로 변환되면(EOF) 종료 — 길이를 모르는 입력의 표준 종료법
    while(std::cin >>ch){
        // 학습: case 뒤에 break가 없으면 아래 case로 계속 넘어간다(fallthrough)
        switch(ch){
            case 'a':
            a++;
            break;
            case 'e':
            a++;
            break;            
            case 'i':
            a++;
            break;
            case 'o':
            a++;
            break;
            case 'u':
            a++;
            break;
            // 학습: 위에서 잡히지 않은 전부 = 여기. 모음이 아니면 자음으로 세는 논리
            default :
                b++;
        } 


    }


    std::cout << a<<'\n';
    std::cout << b<<'\n';

    return 0;
}