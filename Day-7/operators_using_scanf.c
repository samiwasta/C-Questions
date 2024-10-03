#include <stdio.h>

int main() {
    int num1, num2;
    char operator;
    
    printf("Enter 1st number: ");
    scanf("%d", &num1);
    printf("Enter 2nd number: ");
    scanf("%d", &num2);
    printf("Enter operator (+,-,*,/): ");
    scanf(" %c", &operator);

    
    int addition = (operator == '+') && printf("addition = %d\n", num1 + num2);
    int subtraction = (operator == '-') && printf("subtraction = %d\n", num1 - num2);
    int multiplication = (operator == '*') && printf("multiplication = %d\n", num1 * num2);
    int division = (operator == '/') && (num2 != 0) && printf("division = %d\n", num1 / num2);
    int division_error = (operator == '/') && (num2 == 0) && printf("Error: Division by zero is not allowed.\n");
    int invalid_operator = !(operator == '+' || operator == '-' || operator == '*' || operator == '/') && printf("Error: Invalid operator.\n");

    return 0;
}