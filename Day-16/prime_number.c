#include<stdio.h>

int main(){
    int num, isPrime = 1;  

    printf("Enter the number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is not Prime\n", num);
        return 0;
    }

    
    for(int i = 2; i <= num / 2; i++){
        if(num % i == 0){
            isPrime = 0;  
            break;        
        }
    }


    if(isPrime){
        printf("%d is Prime\n", num);
    }
    else {
        printf("%d is not Prime\n", num);
    }

    return 0;
}
