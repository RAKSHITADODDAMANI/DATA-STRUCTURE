///Write a modular C program to print first N natural numbers and calculate their sum.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void display(int);                          //Function prototype for displaying first N natural numbers.
int sum (int);                              //Function prototype for calculating the sum of first N natural numbers.
main()
{
    int n,s;                                //variable declaration for storing value of n and sum.
    printf("Enter the value of n\n");       //Display to enter the value of n.
    scanf("%d",&n);                         //Read the value of n.
    display(n);                             //call display function for displaying first N natural numbers.
    s=sum(n);                               //call sum function for calculating sum of first N natural numbers.
    printf("SUM:%d",s);                     //Display the sum.
}
void display(int n)                         //Function definition to display first N natural numbers.
{
    int i;                                  //Initialize a counter.
    for(i=1;i<=n;i++)                       //for loop till n natural numbers are displayed.
        printf("%d\n",i);                   //Display the natural number.
}
int sum (int n)                             //Function definition to calculate the sum of first N natural numbers.
{
    int i,s=0;                              //Initialize a counter and a variable to store the sum.
    for(i=1;i<=n;i++)                       //loop till N natural numbers sum is calculated.
    {
        s=s+i;                              //Store the result in s.
    }
    return s;                               //return sum.
}

