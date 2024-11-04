#include<stdio.h>
int main(){
    int arrSize;
    printf("Enter the number of array elements: ");
    scanf("%d", &arrSize);

    int arr[arrSize];

    printf("Enter the array elements: ");
    for(int i = 0; i < arrSize; i++){
        scanf("%d", &arr[i]);
    }

    printf("Array: ");
    for(int i = 0; i < arrSize; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    int min = arr[0];
    int max = arr[0];

    for(int i = 1; i < arrSize; i++){
        if(arr[i] < min){
            min = arr[i];
        }
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Minimum element is %d\n", min);
    printf("Maximum element is %d\n", max);

    return 0;


}