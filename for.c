#include <stdio.h>

int main (void){

    int arr [2][3][2]
    = { { { 0, 6 }, { 1, 7 }, { 2, 8 } }, 
    { { 3, 9 }, { 4, 10 }, { 5, 11 } } };

    for (int i=0; i < 2; ++i){
        for (int j=0; j < 3; ++j){
             for(int k=0; k < 2; ++k){
                printf("Element at arr[%2i][%2i][%2i] = %4d\n",
                i , j , k , arr[i][j][k]);

             }
        }
        
    }
    return 0;

}//end for.c
