#include<iostream>
#include<stdlib.h>

int main(){


    int s[3][10];
    int list[10];
    int max;
    srand(time(NULL));
    for(int i = 0;i < 10 ; i++){

        int elem = rand() % 100 +1;
        list[i] = elem;
        std::cout << elem <<" ";
    }

    std::cout<<'\n'<<'\n';
    max = list[0];
    for(auto elem : list){
        if (elem >max)
            max = elem;
    }

    std::cout << "최댓값 : "<<max;
    return 0;
}