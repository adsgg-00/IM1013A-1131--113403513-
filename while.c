#include <stdio.h>
#include <stdlib.h>

int main(void){

    unsigned int students;
    int grade;
    int total;
    int counter;
    

    float average;

    total = 0;
    counter = 1;

    printf("Enter your students number:\n");
    scanf("%d" , &students);

    while (students <= 0){
        printf("The number must be greater than 0\n");\
        printf("Enter your students number:\n");
        scanf("%d" , &students);
    }
    
    while ( grade>100, grade<0)
    {
        printf("Enter a grade for students %d:\n",counter);
        
    }
    
    while ( counter <= students){
        printf("Enter a grade for students %d:\n",counter);
        scanf("%d" , &grade );
        counter = counter + 1;

        total=total + grade;
    }

    average = (float)total/students;
    printf("class average:%f\n", average);
    
    
 

}//end while.