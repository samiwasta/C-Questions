#include<stdio.h>

int main() {
    int num, isPrime;

    scanf("%d", &num);

    printf("Prime numbers between 1 and %d are: ", num);

    for (int i = 2; i <= num; i++) {
        isPrime = 1; 

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0; 
                break;       
            }
        }

        
        if (isPrime) {
            printf("%d ", i);
        }
    }
    return 0;
}
