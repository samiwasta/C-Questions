#include<stdio.h>
int main(){
    int num = 0;
    int lastDigit = 0;
    int firstDigit = 0;
    printf("Enter the 3 Digit number: ");
    scanf("%d", &num);

    lastDigit = num % 10;
    firstDigit = num / 100;

    num = firstDigit + lastDigit;

    printf("The sum is: %d", num);

    return 0;
}