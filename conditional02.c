#include<stdio.h>

int main(){

    int number1,number2,number3,max;
    printf("Input three number:");
    scanf("%d %d %d",&number1,&number2,&number3);

    max=(number1>number2&&number1>number3)?number1:(number2>number3)?number2:number3;
    printf("Maximum between %d %d and %d = %d",number1,number2,number3,max);

    return 0;
}
