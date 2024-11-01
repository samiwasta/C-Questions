#include<stdio.h>
int main(){
    int num;
    printf("Enter the number of elements: ");
    scanf("%d", &num);

    int arr[num], rev[num];

    printf("Enter %d elements:\n", num);

    for(int i = 0; i < num; i++){
        printf("Element at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("The value stored into the array are: ");
    for(int i = 0; i < num; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");
    int j = 0;

    printf("The values stored into the array in reverse are: ");
    for(int i = num - 1; i >= 0; i--){
        rev[j] = arr[i];
        j++;
    }

    for(int i = 0; i < num; i++){
        printf("%d ", rev[i]);
    }

    return 0;
}