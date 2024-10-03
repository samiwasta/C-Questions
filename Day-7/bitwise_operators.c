#include<stdio.h>
int main(){
    int a;
    int b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);
    printf("\n");

    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);
    printf("~a = %lu\n", (long unsigned)~a);
    printf("a << 1 = %d\n", a << 1);
    printf("a >> 1 = %d\n", a >> 1);

    return 0;
}