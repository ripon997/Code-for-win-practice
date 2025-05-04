#include<stdio.h>

int main(){

    char x;
    printf("Enter a letter:");
    scanf("%c",&x);
    (x>='a' && x<='z') || (x>='A' && x<='Z')?
    printf("An alphabet"):printf("Not alphabet");
    return 0;
}
