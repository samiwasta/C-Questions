#include<stdio.h>
int main(){
    int num, lastDigit, nextLastDigit, diff = 0;

    scanf("%d", &num);

    while(num != 0){
        lastDigit = num % 10;
        num /= 10;
        nextLastDigit = num % 10;
        diff = lastDigit - nextLastDigit;

        if(diff != 1){
            printf("It is not a step number");
            return 0;
        }
    }

    printf("It is a step number");

    return 0;
    
}