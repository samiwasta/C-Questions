#include<stdio.h>
int main(){
    int arr[3] = {1,2,3};

    int temp = arr[0];
    arr[0] = arr[1];
    arr[1] = arr[2];
    arr[2] = temp;

    printf("Rotated left: ");

    for(int i = 0; i < 3; i++){
        printf("%d ", &arr[i]);
    }

    return 0;
}