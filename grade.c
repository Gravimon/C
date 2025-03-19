#include <stdio.h>

void main (void)
{
    int number;
    float i,sum,grade;

    printf ("Compute the average of grade(s) !\n");

    printf ("\nNumber of grades: ");
    scanf ("%d",&number);
/*////////////////////////////////////////////*/
    i=0;
    sum=0;
    while (i<number)
    {
        printf ("\nEnter grade: ");
        scanf ("%f",&grade);
        sum+=grade; /*sum=sum+grade*/
        i++;
    }
/*////////////////////////////////////////////*/
    /*Display the average*/
    printf ("\nThe average of grade(s) is: %.2f\n",sum/i);
}
/*Author: George Gardelis
Date: 19/03/2025*/
