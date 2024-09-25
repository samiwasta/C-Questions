#include<stdio.h>
int main(){
    float fahrenheit = 0;
    float celsius = 0;

    printf("Enter the fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * (5.0 / 9.0);

    printf("%.2f fahrenheit is %.2f celsius.", fahrenheit, celsius);
}