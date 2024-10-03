#include<stdio.h>
int main(){
    int num = 0;
    scanf("%d", &num);

    (num % 2 == 0) && printf("%d is an Even number", num) || printf("%d is an Odd number", num);

    return 0;
}