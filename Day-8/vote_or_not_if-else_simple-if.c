#include<stdio.h>
int main(){
    char name[20];
    int age;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18){
        printf("Hi %s you are eligible to vote", name);
    }

    if(age < 18){
        printf("Sorry %s you are not eligible to vote", name);
    }

    return 0;
}