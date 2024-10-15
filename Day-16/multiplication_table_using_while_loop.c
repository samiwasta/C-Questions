#include<stdio.h>
int main(){
    int num, prod, digit = 1;
    printf("Enter the Number: ");
    scanf("%d", &num);

    while(digit <= 10){
        prod = num * digit;

        printf("%d X %d = %d\n", num, digit, prod);

        digit++;
    }

    return 0;
}