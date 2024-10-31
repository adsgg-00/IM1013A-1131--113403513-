#include <stdio.h>

int main(void){

    int grade;
    int counter;
    int total;
    float average;

    total = 0;
    counter = 0;
    average = 0;
    
    int pass;
    int fall;
    
    pass = 0;
    fall = 0;
        
    fall = counter - pass; 


    printf("Enter grade,-1 to end\n");
    scanf("%d",&grade);

    while ( grade != -1 )
    {
        total = total + grade;
        counter = counter +1;

        printf("Enter grade,-1 to end\n");
        scanf("%d", &grade);
        average= average+1;
    if (grade >= 60)
    {
        pass =pass+1;
    }
    }

    
    if ( counter != 0)
    {
        average = (float) total / average;
        
        printf("Class total is %d\n", total);
        printf("Class size is %d\n", counter);
        printf("Class average is %.2f\n", average);
        printf("Number of passes is %d\n", pass);
        printf("Number of fails is %d\n", fall);
    }else {
     puts("No grades were enterde\n");
     }

    

    

    

    


}

        if ( number < 2 ){
            printf("The size has be between 2 and 9.\nPlease enter again\n");
        }else if ( number > 9 ){
            printf("The size has be between 2 and 9.\nPlease enter again\n");
            }else 
            printf("yes");