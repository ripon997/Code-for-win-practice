#include<stdio.h>

int main(){

    int x;
    printf("Enter a year:");
    scanf("%d",&x);
    (x%4==0&&x%100!=0)?printf("LEAP YEAR")
    :(x%4==0)?printf("LEAP YEAR"):printf("COMMON YEAR");

    return 0;
}
