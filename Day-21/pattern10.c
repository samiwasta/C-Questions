/*

0
0  1
0  1  1
0  1  1  2
0  1  1  2  3
0  1  1  2  3  5

*/

#include<stdio.h>

int main(){
    int num;
    
    scanf("%d", &num);

    
    for(int row = 1; row <= num; row++){
        int prev = 0, nextPrev = 1; 
        
        for(int col = 1; col <= row; col++){
            if(col == 1){
                printf("%d ", 0);
            }
            else if(col == 2){
                printf("%d ", 1); 
            }
            else{
                int current = prev + nextPrev;
                printf("%d ", current);
                
                prev = nextPrev;
                nextPrev = current;
            }
        }
        printf("\n");
    }

    return 0;
}
