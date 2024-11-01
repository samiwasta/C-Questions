#include<stdio.h>
int main(){
    int num, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &num);

    int arr[num];

    printf("Enter %d elements:\n", num);

    for(int i = 0; i < num; i++){
        printf("Element at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Elements at even indices are:\n");
    for(int i = 0; i < num; i++){
        if(arr[i] % 2 == 0){
            sum += arr[i];
        }
    }

    printf("The sum of all even numbers in the array is = %d", sum);

    return 0;
}