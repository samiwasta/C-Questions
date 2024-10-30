#include<stdio.h>
int main(){
    int num, arr[100], sum = 0;;

    scanf("%d", &num);

    if(num == 0){
        printf("Array size is %d", num);
    }

    else {
        
        for(int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < 2; i++){
        sum += arr[i];
    }

    printf("Sum = %d\n", sum);

    }

    for(int i = 0; i < num; i++){
        printf("arr[%d] = %d\n", i , arr[i]);
    }

}