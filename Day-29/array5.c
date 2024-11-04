#include<stdio.h>
int main(){
    int arrSize, element, index, arr[50];
    printf("Enter the number of array elements: ");
    scanf("%d", &arrSize);

    printf("Enter the array elements: ");
    for(int i = 0; i < arrSize; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the element you want to insert: ");
    scanf("%d", &element);

    printf("Enter the index you want to insert: ");
    scanf("%d", &index);   

    index--;

    for(int i = arrSize; i  > index; i--){
        arr[i] = arr[i - 1];
    }

    arr[index] = element;
    arrSize++;

    printf("New Array: ");
    for(int i = 0; i < arrSize; i++){
        printf("%d ", arr[i]);
    }

    return 0;


}