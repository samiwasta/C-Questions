#include<stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Triangle should have sides greater than 0\n");
    }
    else if ((a + b) > c && (b + c) > a && (a + c) > b) {
        printf("Triangle is valid\n");
    } 
    else {
        printf("The triangle is not valid\n");
    }

    return 0;
}
