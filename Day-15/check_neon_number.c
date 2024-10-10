#include<stdio.h>

int main() {
    int num, result, lastDigit, sum = 0, originalNum;

    scanf("%d", &num);

    originalNum = num;

    result = num * num;

    while(result != 0) {
        lastDigit = result % 10;
        sum += lastDigit;
        result /= 10;
    }

    if(originalNum == sum) {
        printf("%d is a neon number\n", originalNum);
    } else {
        printf("%d is not a neon number\n", originalNum);
    }

    return 0;
}
