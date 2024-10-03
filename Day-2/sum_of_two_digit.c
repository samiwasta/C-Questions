// Write a C Program to make sum of two digit number

#include<stdio.h>

int main(){
    int n = 34, sum;
    sum = n % 10;
    n = n / 10;
    sum += n;
    printf("Sum = %d", sum);
    return 0;
}