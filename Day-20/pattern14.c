/*

A  B  C  D  
B  C  D  E
C  D  E  F
D  E  F  G

*/

#include<stdio.h>
int main(){
    int num;
    
    scanf("%d", &num);
    
    for(int row = 1; row <= num; row++){
        int ch = row;
        for(int col = 1; col <= num; col++){
            printf("%c ", ch+64);
            ch++;
        }
        printf("\n");
    }
    return 0;
}

// #include<stdio.h>
// int main(){
//     int num;
//     scanf("%d", &num);

//     for(int row = 1; row <= num; row++){
//         for(int col = 1; col <= num; col++){
//             printf("%c ", (row+col-1)+64);
//         }
//         printf("\n");
//     }
//     return 0;
// }