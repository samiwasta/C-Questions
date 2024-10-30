#include<stdio.h>
int main(){
    int arr1[3], arr2[3], middle[2];

    for(int i = 0; i < 3; i++){
        scanf("%d", &arr1[i]);
    }

    for(int i = 0; i < 3; i++){
        scanf("%d", &arr2[i]);
    }

    middle[0] = arr1[1];
    middle[1] = arr2[1];

    printf("Array 1 = ");
    for(int i = 0; i < 3; i++){
        printf("%d ", arr1[i]);
    }

    printf("\n");

    printf("Array 2 = ");
    for(int i = 0; i < 3; i++){
        printf("%d ", arr2[i]);
    }

    printf("\n");

    printf("Middle Elements = ");
    for(int i = 0; i < 2; i++){
        printf("%d ", middle[i]);
    }
}