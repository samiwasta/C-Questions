#include<stdio.h>
int main(){
    int num;
    printf("Enter the number of elements: ");
    scanf("%d", &num);

    int arr[num];

    printf("Enter %d elements:\n", num);

    for(int i = 0; i < num; i++){
        printf("Element at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Elements at even indices are:\n");
    for(int i = 0; i < num; i++){
        if(i % 2 == 0){
            printf("Element at index %d: %d\n",i, arr[i]);
        }
    }

    printf("Elements at odd indices are:\n");
    for(int i = 0; i < num; i++){
        if(i % 2 != 0){
            printf("Element at index %d: %d\n",i, arr[i]);
        }
    }

    return 0;
}