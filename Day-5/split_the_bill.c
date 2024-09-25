#include<stdio.h>
int main(){
    float bill = 0;
    int people = 0;
    float split = 0;

    printf("Total bill: ");
    scanf("%f", &bill);

    printf("No. of people: ");
    scanf("%d", &people);

    split = bill / people;

    printf("Amount each person needs to pay -> %.0f", split);

    return 0;
}