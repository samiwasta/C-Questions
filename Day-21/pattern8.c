/*

1
2  6
3  7 10
4  8 11 13
5  9 12 14 15

*/

#include<stdio.h>

int main(){
    int num;
    scanf("%d", &num);

    for(int row = 1; row <= num; row++){
        int val = row;  

        for(int col = 1; col <= row; col++){
            printf("%d ", val);
            val = val + (num - col); 
        }
        printf("\n");  
    }

    return 0;
}

// #include<stdio.h>
// int main(){
//     int num, k, val;
//     scanf("%d", &num);

//     for(int row = 1; row <= num; row++){
//         k = num -1;
//         val = row;
//         for(int col = 1; col <= row; col++){
//             printf("%d ", val);

//             val += k--;
//         }
//         printf("\n");
//     }
//     return 0;
// }
