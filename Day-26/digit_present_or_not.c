#include<stdio.h>
int main(){
    int num, arr[100];
    scanf("%d", &num);

    if(num < 1){
        printf("Invalid array");
    }

    printf("Enter the elements\n");
    
    for(int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }

    if(arr[0] == 15 || arr[num-1] == 15){
        printf("Yes");
    }
    else {
        printf("No");
    }

    for(int i = 0; i < num; i++){
        printf("%d ", arr[i]);
    }
}