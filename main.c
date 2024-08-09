#include <stdio.h>
#include <stdlib.h>
#include "grade.h"



int main()
{
    int numGrades = 5;
    int total = 0;
    int count = 0;
    int x;

    while (count < numGrades) {
        printf("Enter a number between 0 and 100: ");
        scanf("%d", &x);

        if (x >= 0 && x <= 100) {
            total += x;
            getGrade(x);
            count++;
        } else {
            printf("Error: Invalid input. Please enter a valid number between 0 and 100.\n");
        }
    }

     double average = (double)total / numGrades;
    printf("Average grade: %.2f\n", average);
    getGrade(average);



      //printf("Enter second number: ");
      //scanf("%f", &b);

      //t = a+b;
      //float avg = (a+b)/2;

      //printf("Total: %f \nAverage: %f \n" ,t,avg);
      //getGrade(avg);

 /*     if(avg<=100 && avg>85)
    {
        printf("Grade: Ex");
    }
    else if(avg<=85 && avg>75)
    {
        printf("Grade: VG");
    }
    else if(avg<=75 && avg>65)
    {
        printf("Grade: G");
    }
    else if(avg<=65 && avg>55)
    {
        printf("Grade: passed");
    }
    else
    {
        printf("Grade: failed");
    }*/

    return 0;
}

