#include <stdio.h>

int main(void){

    printf("Program to Print the Tables of 1 to 10\n");

    for (int i = 1; i < 11; i++)
    {
        for(int j = 1 ;j < 11; j++){
        printf("%4d", j*i);
        }
        printf("\n");
    }
    return 0;
}