#include<stdio.h>
int main(){
    int num, count=0;

    printf("Enter the number: ");
    scanf("%d", &num);

    if(num == 0){
        count++;
    }

    while(num){
        num /= 10;
        count++;
    }

    printf("%d", count);

    return 0;
}