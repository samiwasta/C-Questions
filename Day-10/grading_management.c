#include<stdio.h>
int main(){

    int phy, chem, bio, maths, comp;
    float total, percentage;
    char grade;

    printf("Enter marks of Physics: \n");
    scanf("%d", &phy);

    printf("Enter marks of Chemistry: \n");
    scanf("%d", &chem);

    printf("Enter marks of Biology: \n");
    scanf("%d", &bio);

    printf("Enter marks of Mathematics: \n");
    scanf("%d", &maths);

    printf("Enter marks of Computer: \n");
    scanf("%d", &comp);

    total = phy+chem+bio+maths+comp;

    percentage = (total/500)*100;

    if(percentage >= 90){
        printf("Total Marks = %.2f/500\n", total);
        printf("Percentage = %.2f%%\n", percentage);
        printf("Grade A");
    }
    else if(percentage >= 80){
        printf("Total Marks = %.2f/500\n", total);
        printf("Percentage = %.2f%%\n", percentage);
        printf("Grade B");
    }
    else if(percentage >= 70){
        printf("Total Marks = %.2f/500\n", total);
        printf("Percentage = %.2f%%\n", percentage);
        printf("Grade C");
    }
    else if(percentage >= 60){
        printf("Total Marks = %.2f/500\n", total);
        printf("Percentage = %.2f%%\n", percentage);
        printf("Grade D");
    }
    else if(percentage >= 40){
        printf("Total Marks = %.2f/500\n", total);
        printf("Percentage = %.2f%%\n", percentage);
        printf("Grade E");
    }
    else {
        printf("Total Marks = %.2f/500\n", total);
        printf("Percentage = %.2f%%", percentage);
        printf("Grade F");
    }

    return 0;
    

    return 0;
}