#include<stdio.h>
int main(){
    int num, arr1[100], arr2[100];
    scanf("%d", &num);

    if(num < 1){
        printf("Invalid array");
    }

    printf("Enter the elements for 1st Array\n");
    
    for(int i = 0; i < num; i++){
        scanf("%d", &arr1[i]);
    }

    printf("Enter the elements for 2nd Array\n");
    
    for(int i = 0; i < num; i++){
        scanf("%d", &arr2[i]);
    }

    if(arr1[0] == arr2[0] || arr1[num-1] == arr2[num-1]){
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }

    for(int i = 0; i < num; i++){
        printf("%d ", arr1[i]);
    }

    printf("\n");

    for(int i = 0; i < num; i++){
        printf("%d ", arr2[i]);
    }

    return 0;
}