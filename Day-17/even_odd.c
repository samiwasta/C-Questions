#include<stdio.h>
int main(){
    int num, sum = 0;

    scanf("%d", &num);

    printf("The even numbers are: ");

    for(int i = 2; i <= 2*num; i++){
        if(i % 2 == 0){
            printf("%d ", i);
            sum += i;
        }
    }

    printf("\nThe Sum of even Natural Numbers up to %d terms : %d",num, sum);

    return 0;
}