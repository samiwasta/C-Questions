#include<stdio.h>

int main(){
    char name[30];    
    char department[50];
    int empId;
    float salary;

    printf("Enter employee name: ");
    scanf("%s", name);  

    printf("Enter employee ID: ");
    scanf("%d", &empId);

    printf("Enter employee designation: ");
    scanf("%s", department); // Removed & from department

    printf("Enter employee salary: ");
    scanf("%f", &salary);

    printf("Employee Details\n");
    printf("Name: %s\n", name);
    printf("Employee ID: %d\n", empId);
    printf("Designation: %s\n", department);
    printf("Salary: $%.2f\n", salary);

    return 0;
}
