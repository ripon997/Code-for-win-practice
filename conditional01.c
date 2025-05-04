#include<stdio.h>

int main(){

    int number1,number2,max;
    printf("Input first number:\n");
    scanf("%d",&number1);
    printf("Input second number:\n");
    scanf("%d",&number2);
    int temp;
    max=(number1>number2)?number1:number2;
    printf("Maximum between %d and %d is %d",number1,number2,max);
    return 0;
}
