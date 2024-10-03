#include<stdio.h>

int main() {
    char nationality, gender;
    int age;

    printf("Enter your nationality (I or i for Indian): \n");
    scanf(" %c", &nationality);

    if(nationality != 'I' && nationality != 'i') {
        printf("Eligibility check is only for Indian citizens.\n");
    } 
    else {
        printf("Enter your gender (M for Male, F for Female): \n");
        scanf(" %c", &gender);

        printf("Enter your age: \n");
        scanf("%d", &age);

        if(gender == 'M' && age >= 21 && age <= 50) {
            printf("Congratulations! You are eligible for marriage.\n");
        } 
        else if(gender == 'F' && age >= 18 && age <= 45) {
            printf("Congratulations! You are eligible for marriage.\n");
        } 
        else {
            printf("Sorry! You are not eligible for marriage.\n");
        }
    }

    return 0;
}
