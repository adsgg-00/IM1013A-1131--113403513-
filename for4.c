#include <stdio.h>

int main(void){

    
    int number;
    int rows;

    printf("The number you want print out(0~9):\n");
    scanf("%d",&number);
    
    printf("The length of the square you want it to be:\n");
    scanf("%d",&rows);

    for(int i=0 ; i < rows ; i++){
        for(int j=0 ; j < rows ; j++){
            if (i == 0 || i == rows -1 || j == 0 || j == rows  -1){
                printf("%2d",number);
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}