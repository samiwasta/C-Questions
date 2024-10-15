#include<stdio.h>

int main(){
    int num, prod, lastDigitNum, lastDigitProd, temp;
    
    printf("Enter the number: ");
    scanf("%d", &num);

    prod = num * num;

    temp = num;

    while(temp > 0){
        lastDigitNum = temp % 10; 
        lastDigitProd = prod % 10;      
        
        if(lastDigitNum != lastDigitProd){
            printf("%d is not an Automorphic number.\n", num);
            return 0;
        }
        
        temp /= 10;
        prod /= 10;
    }

    printf("%d is an Automorphic number.\n", num);
    
    return 0;
}
