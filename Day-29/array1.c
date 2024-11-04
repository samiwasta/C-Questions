#include<stdio.h>
int main(){
    int arrSize, key;
    printf("Enter the number of array elements: ");
    scanf("%d", &arrSize);

    int arr[arrSize];

    printf("Enter the number you want to find: ");
    scanf("%d", &key);

    printf("Enter the array elements: ");
    for(int i = 0; i < arrSize; i++){
        scanf("%d", &arr[i]);
    }

    printf("Array: ");
    for(int i = 0; i < arrSize; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    int found = 0;
    for(int i = 0; i < arrSize; i++){
        if(key == arr[i]){
            printf("Element %d found at index %d", key, i);
            found = 1;
            break;
        }
    }

    if(!found){
        printf("Element %d not found", key);
    }

    return 0;


}