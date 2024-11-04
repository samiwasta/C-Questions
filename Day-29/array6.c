#include<stdio.h>
int main(){
    int arrSize, element, index, arr[50], found = 0;
    printf("Enter the number of array elements: ");
    scanf("%d", &arrSize);

    printf("Enter the array elements: ");
    for(int i = 0; i < arrSize; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the element you want to delete: ");
    scanf("%d", &element);  

    for(int i = 0; i < arrSize; i++){
        if(arr[i] == element){
            found = 1;
            for(int j = i; j < arrSize; j++){
                arr[j] = arr[j+1];
            }
            arrSize--;
            i--;
        }
    }

   if(found) {
        printf("New Array: ");
        for (int i = 0; i < arrSize; i++) {
            printf("%d ", arr[i]);
        }
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;


}