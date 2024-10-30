#include<stdio.h>
int main(){
    int num, arr[100], temp;

    scanf("%d", &num);

    for(int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < num; i++){
        for(int j = i + 1; j < num; j++){
            if(arr[i] < arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted Elements: ");
    for(int i = 0; i < num; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}