///Q) Write a modular C program to read and display 1D array and identify the maximum element.
#include<stdio.h>
void read(int m[100],int n)             //Function definition to read n values.
{
    int i;                              //Initialize a counter.
    for(i=0;i<n;i++)                    //loop till n numbers are read.
    {
        scanf("%d",&m[i]);              //Read n numbers.
    }
}
void display(int m[100],int n)          //Function definition to display n numbers.
{
    int i;                              //Initialize a counter.
    for(i=0;i<n;i++)                    //loop till n numbers are displayed.
    {
        printf("%d\t",m[i]);            //Display the data.
    }
}
int max(int m[100],int n)               //Function definition to find the maximum element.
{
    int res,i;                          //Initialize a counter and a variable res to store the result.
    res=m[0];                           //store the first element of array in res assuming it is the maximum element.
    for(i=1;i<n;i++)                    //Loop to trace all the elements in an array.
    {
        if(m[i]>res)                    //check if the next element of array is greater than res.
            res=m[i];                   //update res.
    }
    return res;                         //Return result.
}
main()
{
    int n,maximum;                      //variable declaration of n to store the number of elements and maximum to store the result.
    int m[100];                         //Declare a integer array.
    printf("Enter the value of n\n");   //Display to enter the value of n.
    scanf("%d",&n);                     //Read the value of n.
    read(m,n);                          //Call read function to read the data.
    display(m,n);                       //Call display function to display the data.
    maximum=max(m,n);                   //Call max function to find the maximum element and store the result in maximum.
    printf("\nMax:%d",maximum);         //Display the result.
}
