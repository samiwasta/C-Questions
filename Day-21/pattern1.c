/*

      # 
      #
#  #  #  #  # 
      #
      #

*/

#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);

    for(int row = 1; row <= num; row++){
        for(int col = 1; col <= num; col++){
            if(row == (num+1)/2 || col == (num+1)/2){
                printf("# ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}