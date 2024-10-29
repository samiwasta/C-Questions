#include<stdio.h>
int main(){
    int num, arr[100];

    printf("Enter the size of array: ");
    scanf("%d", &num);


    for(int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }

    int sum=0, sub=arr[0]*2, prod=1;

    for(int i = 0; i < num; i++){
        sum += arr[i];
        sub -= arr[i];
        prod *= arr[i];
    }
    printf("%d\n", sum);
    printf("%d\n", sub);
    printf("%d\n", prod);
    return 0;
}