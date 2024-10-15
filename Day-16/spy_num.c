#include<stdio.h>
int main(){
    int num, sum=0, prod=1, lastDigit, temp;

    printf("Enter the number: ");
    scanf("%d", &num);

    temp = num;

    while(temp){
        lastDigit = temp % 10;

        sum += lastDigit;
        prod *= lastDigit;

        temp /= 10; 
    }

    if(sum == prod){
        printf("%d is a spy number", num);
    }
    else {
        printf("%d is not a spy number", num);
    }

    return 0;
}