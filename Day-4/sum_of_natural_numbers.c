#include<stdio.h>
int main(){
    int num = 0;
    int result = 0;
    printf("Enter the number: ");
    scanf("%d", &num);

    result = (num * (num + 1)) / 2;

    printf("The sum of natural numbers from 1 to %d is: %d", num, result);

    return 0;
}