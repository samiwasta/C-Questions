#include<stdio.h>
int main(){
    int num, isPrime, isPrime2;

    scanf("%d", &num);
    if(num <= 1){
        printf("The number is neither prime nor composite.");
    }
    for(int i = 2; i <= num / 2; i++){
        isPrime = 1;
        for(int j = 2; j <= i / 2; j++){
            if(i % j == 0){
                isPrime = 0;
                break;
            }
        }

        if(isPrime){
            isPrime2 = 1;
            for(int j = 2; j <= (num - i) / 2; j++){
                if((num - i) % j == 0){
                    isPrime2 = 0;
                    break;
                }
            }

            if(isPrime2){
                printf("%d = %d + %d\n", num, i, num - i);
            }
        }
    }
    return 0;
}