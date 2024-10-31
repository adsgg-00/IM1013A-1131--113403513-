#include <stdio.h>

int main(void){

    int x[4][4] = {
    {1 , 2, 3, 4},
    {11 ,22 ,33 ,44},
    {9, 99 ,999 ,9999},
    {10, 20, 30, 40}
    };

    for(int i = 0 ; i <= 3; i++ ){
        for (int j = 0 ; j <= 3; j++){
            printf("%5d",x[i][j]);
        }
        printf("\n");
    }
    return 0;
}