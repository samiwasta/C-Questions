#include<stdio.h>
int main(){
    int num, element;
    int arr[100];
    printf("Enter how many array element you want to add ");
    scanf("%d", &num);

    for(int i = 0; i < num; i++){
        printf("Enter the element for index %d ", i);
        scanf("%d", &element);

        arr[i] = element;
    }

    for(int i = 0; i < num; i++){
        printf("The element at arr[%d] is %d\n", i, arr[i]);
    }

    return 0;
}