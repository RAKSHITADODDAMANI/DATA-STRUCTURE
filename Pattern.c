///Q) Write a modular C program to read an integer number and print the below pattern.
///if n=1          if n=2
///    *             *  *
///                  *  *
#include<stdio.h>
#include<stdlib.h>
void pattern(int);                            //Function prototype to display the pattern.
main()
{
    int n;                                    //Integer variable to store the value of n.
    printf("Enter the value of n\n");         //Display to enter the value of n.
    scanf("%d",&n);                           //Read the value of n.
    pattern(n);                               //call pattern function to display the required pattern.
}
void pattern(int n)                           //Function definition to display the pattern.
{
    int i,j;                                  //Variable declaration of counters.
    for(i=1;i<=n;i++)                         //loop till n value is reached.
    {
        for(j=1;j<=n;j++)                     //loop till n value is reached.
        {
            printf("* ");                     //print the character/pattern.
        }
        printf("\n");                         //Move to new line.
    }
}
