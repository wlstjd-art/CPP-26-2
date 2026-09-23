#include <iostream>
#include <string>

int main(){
    const int maxpeople=3;
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
        
        if(ages[i]>=ageThreshold){
            
            std::cout << names[i] <<":"<<ages[i]<<" ";
            a++;
        }
    }
    if(a == 0){
            std::cout << ageThreshold<<"이상의 나이를 가진 고객이 없습니다.";
        }
}