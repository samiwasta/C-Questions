#include<stdio.h>
int main(){
    int num, result;

    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        result = i*i*i;
        printf("Number is : %d and cube of the %d is : %d\n", i,i,result);
    }

    return 0;
}