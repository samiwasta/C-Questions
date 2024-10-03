#include<stdio.h>
int main(){
    int a;
    int b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);
    printf("\n");

    printf("a && b = %d\n", a && b);
    printf("a || b = %d\n", a || b);
    printf("!a = %d\n", !a);
    printf("!b = %d\n", !b);

    return 0;
}