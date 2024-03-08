///Write a modular C program to read and display 'n' values in 1D array and calculate the sum of all the elements.
#include<stdio.h>
#include<stdlib.h>
void read(float [],int);              //Function prototype to read n numbers.
void display(float [],int);           //Function prototype for displaying n numbers.
float sum(float [],int);              //Function prototype for calculating the sum of n numbers.
main()
{
    int n;                            //Variable to store n value.
    float m[100],s;                   //Declaration of 1D array and variable s .
    printf("Enter the number of students\n");//Display to enter the value of n.
    scanf("%d",&n);                  //Read the value of n.
    read(m,n);                       //call read function for reading N numbers.
    display(m,n);                    //call display function for displaying n numbers.
    s=sum(m,n);                      //call sum function for calculating sum of n numbers.
    printf("Sum=%f",s);              //Display the sum
}
void read(float m[100],int n)        //Function definition to read N values.
{
    int i;                           //Initialize a counter.
    for(i=0;i<n;i++)                 //loop till N numbers are read.
    {
        scanf("%f",&m[i]);           //Read n numbers.
    }
}
void display(float m[100],int n)      //Function definition to display N numbers.
{
    int i;                            //Initialize a counter.
    for(i=0;i<n;i++)                  //loop till N numbers are displayed.
    {
        printf("%f\n",m[i]);          //Display the data.
    }
}
float sum(float m[100],int n)         //Function definition to calculate the sum of N numbers.
{
    float s=0;                        //Initialize a variable to store the sum.
    int i;                            //Initialize a counter.
    for(i=0;i<n;i++)                  //loop till N numbers sum is calculated.
        s=s+m[i];                     //Store the result in s.
    return s;                         //return sum.
}
