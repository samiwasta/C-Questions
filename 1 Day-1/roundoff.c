#include<stdio.h>
int main(){
    int num = 26;
    int a = num % 10;
    (a >= 5) && printf("Round off is %d", ((num/10)+1)*10) || printf("Round off is %d", (num/10)*10);
    return 0;
}