#include<stdio.h>
int main(){
    int num, sum=0;

    scanf("%d", &num);

    for(int i = 1; i < num; i++){
        if(num % i == 0){
            sum += i;
        }
    }

    if(num == sum){
        printf("%d is a Perfect Number", num);
    }
    else {
        printf("%d is not a Perfect Number", num);
    }


    return 0;
}