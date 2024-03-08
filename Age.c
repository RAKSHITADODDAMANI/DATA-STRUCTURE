///Q) Write a C program to read the age of 50 students and display the same.
#include<stdio.h>
main()
{
    int n,i;                   //Declare a variable n to store number of students and a counter.
    int age[50];               //Declare a integer array to store the age of 50 students.
    n=50;                      //Initialize n as 50.
    for(i=0;i<n;i++)           //Loop till all 50 students age is read.
    {
        scanf("%d",&age[i]);   //Read the age of the students.
    }
    for(i=0;i<n;i++)           //Loop till all 50 students age is displayed.
    {
        printf("%d\t",age[i]);   //Display the data.
    }
}
