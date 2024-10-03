// Write a C Program to swap two numbers using third variable. 

#include<stdio.h>

int main(){
    int a = 10, b = 20, temp;
    printf("a = %d , b = %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("a = %d , b = %d", a, b);
    return 0;
}