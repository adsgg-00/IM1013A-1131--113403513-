#include <stdio.h>

int main(void){


    int size;
    printf("Please enter size for diamond\n");
    scanf("%d",&size);

    while ( size < 2 || size > 9 )
    {
        printf("The size has be between 2 and 9.\nPlease enter again\n");
        printf("Please enter size for diamond\n");
        scanf("%d",&size);
    }for (int i = 1; i <= size; i++){
        for (int j = size; j > i; j--){
            printf(" ");
        }
        for (int j = 1; j <= i; j++){
            printf("%d", j );
        }
        for (int j = i - 1 ; j >= 1 ;j--){
            printf("%d", j );
        }
        printf("\n");
    }
        
    for (int i = size -1 ; i >= 1; i--){
        for (int j = size; j > i; j--){
            printf(" ");
        }
        for (int j = 1; j <= i; j++){
            printf("%d", j );
        }
        for (int j = i - 1 ; j >= 1 ;j--){
            printf("%d", j );
        }
        printf("\n");
    }
    return 0;
}
