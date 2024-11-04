#include <stdio.h>

int main() {
    int arrSize;
    printf("Enter the number of array elements: ");
    scanf("%d", &arrSize);

    if (arrSize < 2) {
        printf("Array must have at least two elements.\n");
        return 0;
    }

    int arr[arrSize];

    printf("Enter the array elements: ");
    for (int i = 0; i < arrSize; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array: ");
    for (int i = 0; i < arrSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for(int i = 0; i < arrSize-1; i++){
        for(int j = 0; j < arrSize-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i = arrSize-1; i >= 0; i--){
        if(arr[i] < arr[arrSize-1]){
            printf("Second largest : %d", arr[i]);
            break;
        }
    }

    return 0;
}