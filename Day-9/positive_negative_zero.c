#include<stdio.h>
int main(){
    int num;

    scanf("%d", &num);
    if(num > 0){
        printf("Positive Number");
    }
    else if(num < 0){
        printf("Negative Number");
    }
    else {
        printf("Zero");
    }

    return 0;
}