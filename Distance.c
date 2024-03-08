///Write a C program to find the distance between two points.
#include<stdio.h>
main()
{
    int x1,y1,x2,y2,d;                       //Initialization of variables to store the two points and the result.
    printf("Enter the two points\n");        //Display to enter the values.
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);       //Read the values.
    d=sqrt(pow((x2-x1),2)+pow((y2-y1),2));   //Formula to find the distance between two points.
    printf("\nDistance :%d",d);              //Display the result.
}
