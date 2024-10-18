#include<stdio.h>
int main(){
    int num, prod, lastDigitNum, lastDigitProd, temp;

    scanf("%d", &num);

    prod = num * num;

    temp = num;

    for(; temp>0; temp /= 10, prod /= 10){
        lastDigitNum = temp % 10;
        lastDigitProd = prod % 10;

        if(lastDigitNum != lastDigitProd){
            printf("%d is not Automorphic number", num);
            return 0;
        }
    }

    printf("%d is Automorphic number", num);

    return 0;

}

