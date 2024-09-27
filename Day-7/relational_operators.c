#include<stdio.h>
int main(){
    int x;
    int y;
    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);
    printf("\n");

    printf("x == y = %d\n", x == y);
    printf("x != y = %d\n", x != y);
    printf("x > y = %d\n", x > y);
    printf("x < y = %d\n", x < y);
    printf("x >= y = %d\n", x >= y);
    printf("x <= y = %d\n", x <= y);

    return 0;
}