#include<stdio.h>
int main(){
    int num, reverse=0, lastDigit;

    printf("Enter the number: ");
    scanf("%d", &num);

    while(num){
        lastDigit = num % 10;

        reverse = reverse * 10 + lastDigit;

        num /= 10;
    }

    printf("%d", reverse);

    return 0;
}