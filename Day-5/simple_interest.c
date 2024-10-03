#include<stdio.h>
int main(){
    float principalAmount = 0;
    int interestRate = 0;
    int years = 0;
    float simpleInterest = 0;

    printf("Enter the principal amount: ");
    scanf("%f", &principalAmount);

    printf("Enter the interest rate (in percentage): ");
    scanf("%d", &interestRate);

    printf("Enter the time in years: ");
    scanf("%d", &years);

    simpleInterest = (principalAmount * interestRate * years) / 100;

    printf("Simple Interest is: %.2f", simpleInterest);

    return 0;
}