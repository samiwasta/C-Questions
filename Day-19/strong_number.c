#include<stdio.h>

int main() {
    int num, temp, lastDigit, sum = 0, prod, i;

    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        lastDigit = temp % 10; 

        prod = 1;

        for (i = 1; i <= lastDigit; i++) {
            prod *= i;
        }

        sum += prod;

        temp /= 10;
    }

    if (sum == num) {
        printf("%d is a Strong Number\n", num);
    } else {
        printf("%d is not a Strong Number\n", num);
    }

    return 0;
}
