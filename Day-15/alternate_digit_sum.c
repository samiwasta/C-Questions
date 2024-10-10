#include<stdio.h>
int main(){
    int num, lastDigit, lastAltDigit, sum1=0, sum2=0;
    scanf("%d", &num);

    while(num != 0){
        lastDigit = num % 10;
        sum1 += lastDigit;

        num /= 10;

        lastAltDigit = num % 10;
        sum2 += lastAltDigit;

        num /= 10;
    }

    if(sum1 == sum2){
        printf("Alternate digit sum is same");
    }
    else {
        printf("Alternate digit sum is not same");
    }

    return 0;
}