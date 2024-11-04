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

    for(int i = 0; i < arrSize-1; i++){
        for(int j = 0; j < arrSize-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted Array: ");
    for(int i = 0; i < arrSize; i++){
        printf("%d ", arr[i]);
    }

    return 0;


}