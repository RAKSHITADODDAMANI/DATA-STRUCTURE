///Q) Write a C program to calculate the string length.
#include<stdio.h>
#include<string.h>
main()
{
    char s[10];                      //Variable declaration of string.
    gets(s);                         //Read the data.
    int x=strlen(s);                 //Finding the length of string using inbuilt function .
    printf("String length:%d",x);    //Display the result.
}
