#include <stdio.h>

int main() {
    int arrSize;
    printf("Enter the number of array elements: ");
    scanf("%d", &arrSize);

    int arr[arrSize];

    printf("Enter the array elements: ");
    for (int i = 0; i < arrSize; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Prime numbers in the array: ");
    for (int i = 0; i < arrSize; i++) {
        int num = arr[i];
        int isPrime = 1; 

        if (num <= 1) {
            isPrime = 0; 
        } else {
            for (int j = 2; j * j <= num; j++) {
                if (num % j == 0) {
                    isPrime = 0; 
                    break;
                }
            }
        }

        if (isPrime) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}
