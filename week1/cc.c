#include <stdio.h>


int main(void)
{
    int  Celsius;
    float  Fahrenheit;

    printf("Celsius to Fahrenheit\n");
    scanf("%d",&Celsius);

    Fahrenheit=( Celsius * 9 ) /5 +32 ;
   
    printf("%f\n",Fahrenheit);
}