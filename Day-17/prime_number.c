#include<stdio.h>
int main(){
    int num, isPrime = 1;

    scanf("%d", &num);

    if(num < 1){
        printf("%d is not a Prime number\n", num);
    }
    else{
        for(int i = 2; i <= num/2; i++){
            if(num % i == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime){
                printf("%d is a Prime number\n", num);
            }
        else {
                printf("%d is not a Prime number\n", num);
            }
    }

    return 0;
}