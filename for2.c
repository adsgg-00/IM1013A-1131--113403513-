#include <stdio.h>
#include <string.h>

int main(void){
    
    int i, j ,l;

    char x[] = "TutorialsPoint";
    
    l = strlen(x);
    

    for ( i = 0; i < l; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c",x[j]);
        }
        printf("\n");
    }
    return 0 ;
}