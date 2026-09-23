#include <stdio.h>


int main(){
    int num1,num2;

    printf("enter num 1 , num 2 :");
    scanf("%d %d",&num1,&num2);
    
    if(num1>0){
        if(num2>0){
            printf("%d ,%d is greather than 0",num1,num2);
        }
        else{
            printf("%d only greather than 0",num1);
        }
    }
    else{
        printf("%d is lower than 0",num1);
    }


    return 0;
}