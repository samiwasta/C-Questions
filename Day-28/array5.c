#include<stdio.h>
int main(){
    int num;
    printf("Enter the number of elements: ");
    scanf("%d", &num);

    int arr[num], arr1[num];

    printf("Enter %d elements:\n", num);

    for(int i = 0; i < num; i++){
        printf("Element at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("The values stored into the first array are: ");
    for(int i = 0; i < num; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    printf("The values copied into the second array are: ");
    for(int i = 0; i < num; i++){
        arr1[i] = arr[i];
    }

    for(int i = 0; i < num; i++){
        printf("%d ", arr1[i]);
    }

    return 0;
}