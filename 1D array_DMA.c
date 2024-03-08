///Q) Write a C program to read a 1D array and display the same using DMA.
#include<stdio.h>
main()
{
    int i,n;                                   //Initialize a counter and a variable to store the number of elements in an array.
    printf("Enter the value of n\n");          //Display to enter the value of n.
    scanf("%d",&n);                            //Read the value of n.
    int *a=(int *)malloc(sizeof(int)*n);       //Memory allocation using dynamic memory allocation.
    for(i=0;i<n;i++)                           //Loop till all n values are read.
    {
        scanf("%d",&a[i]);                     //read the integer data.
    }
    for(i=0;i<n;i++)                           //Loop till all n values are displayed.
    {
        printf("%d",a[i]);                     //Display the integer data.
    }
    free(a);                                   //free space
}
