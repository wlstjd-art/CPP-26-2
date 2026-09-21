#include <iostream>
#include <time.h>

int main(){
    srand (time(NULL));

    int guess;
    int tries=0;
    int answer = (rand()%10)+1;   // 0 ~  99   +1
        std::cout <<"Enter your guess between 1~10: ";
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