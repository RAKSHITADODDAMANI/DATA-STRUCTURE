///Q) Write a modular C program to read and display string and calculate the length of the string without using inbuilt function.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void read(char s[100])              //Function definition to read the string data.
{
    gets(s);                        //Read the data.
}
void display(char s[100])           //Function definition to display the string data.
{
    puts(s);                        //Display the data.
}
int str_length(char s[100])         //Function definition to calculate the length of the string.
{
    int i=0;                        //Declare a counter.
    while(s[i]!='\0')               //Loop till end of the string is reached.
        i++;                        //Increment the counter.
    return i;                       //Return the result.
}
main()
{
    int x;                           //Variable to store the length of string.
    char s[100];                     //Variable declaration of string.
    read(s);                         //Call read function to read the string.
    display(s);                      //Call display function to display the string.
    x=str_length(s);                 //Call str_length function to calculate length of the string.
    printf("String length:%d",x);    //Display the result.
}

