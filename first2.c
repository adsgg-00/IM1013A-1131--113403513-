#include <stdio.h>


int main(void)
{
    int number1;
    int number2;
    
    printf("Enter first number\n");
    scanf("%d", &number1);
    printf("Enter Second number\n");
    scanf("%d", &number2);                    

    int sum;
    sum= number1 + number2;

    printf("%d\n", sum);

}