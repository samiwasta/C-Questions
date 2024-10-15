#include<stdio.h>
int main(){
    int num, oddSum=0, evenSum=0, i=1; 

    printf("Enter the number: ");
    scanf("%d", &num);

    if(num < 0){
        printf("Invalid Input");
    }
    else {
        while(i <= num){
            if(i % 2 == 0){
                evenSum += i;
            }
            else {
                oddSum += i;
            }
            i++;
        }

        printf("Even Sum = %d\n", evenSum);
        printf("Odd Sum = %d\n", oddSum);
    }

    return 0;
}