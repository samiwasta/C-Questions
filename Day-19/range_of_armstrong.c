#include<stdio.h>
#include<math.h>

int main(){
    int num;

    
    printf("Enter the upper limit: ");
    scanf("%d", &num);

    printf("Armstrong numbers between 100 and %d are: ", num);

    for (int i = 100; i <= num; i++) {
        int originalNum = i;
        int count = 0, result = 0, remainder;

        for (int temp = i; temp != 0; temp /= 10) {
            count++;
        }

        for (int temp = i; temp != 0; temp /= 10) {
            remainder = temp % 10;
            result += pow(remainder, count);
        }

        if (result == originalNum) {
            printf("%d ", originalNum);  
        }
    }

    return 0;
}
