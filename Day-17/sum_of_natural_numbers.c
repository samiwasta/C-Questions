#include<stdio.h>
int main(){
    int num;

    scanf("%d", &num);

    printf("The first %d natural number is :\n", num);

    for(int i = 1; i <= num; i++){
        printf("%d ", i);
    }

    printf("\nThe Sum of Natural Numbers upto %d terms : %d", num, (num*(num + 1)/2));

    return 0;
}