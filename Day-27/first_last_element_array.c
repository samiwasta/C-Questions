#include<stdio.h>
int main(){
    int num, arr1[100], arr2[100], arr[2];

    scanf("%d", &num);

    for(int i = 0; i < num; i++){
        scanf("%d", &arr1[i]);
    }

    for(int i = 0; i < num; i++){
        scanf("%d", &arr2[i]);
    }

    arr[0] = arr1[0];
    arr[1] = arr2[num-1];

        printf("Array 1 = ");
    for(int i = 0; i < num; i++){
        printf("%d ", arr1[i]);
    }

    printf("\n");

    printf("Array 2 = ");
    for(int i = 0; i < num; i++){
        printf("%d ", arr2[i]);
    }

    printf("\n");

    printf("First and Last Elements = ");
    for(int i = 0; i < 2; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}