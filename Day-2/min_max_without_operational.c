#include<stdio.h>
int main(){
    int a = 20, b = 30;
    (a > b) && printf("Max is %d", a) || printf("Max is %d", b);
    return 0;
}