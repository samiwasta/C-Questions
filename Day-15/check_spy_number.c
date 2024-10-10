#include<stdio.h>
int main(){
    int num, prod = 1, sum = 0, lastDigit, originalNum;

    scanf("%d", &num);
    originalNum = num;

    while(num != 0){
        lastDigit = num % 10;

        prod = prod * lastDigit;
        sum = sum + lastDigit;

        num /= 10;
    }

    if(prod == sum){
        printf("%d is a spy number", originalNum);
    }
    else {
       printf("%d is not a spy number", originalNum); 
    }

    return 0;
}