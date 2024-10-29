#include<stdio.h>
int main(){
    int num=3, arr[100];

    for(int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }

    if(arr[0] > arr[1] && arr[0] > arr[2]){
        printf("%d is greater", arr[0]);
    }
    else if(arr[1] > arr[2]){
        printf("%d is greater", arr[1]);
    }
    else {
        printf("%d is greater", arr[2]);
    }

    return 0;
}