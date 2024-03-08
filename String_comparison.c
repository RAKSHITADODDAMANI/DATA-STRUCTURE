///Q) Write a modular C program to Compare two strings using inbuilt function.
#include<stdio.h>
#include<string.h>
main()
{
    int x;                                       //variable declaration to store the result.
    char s1[100],s2[100];                        //variable declaration of two strings.
    gets(s1);                                    //Read first string.
    gets(s2);                                    //Read second string.
    x=strcmp(s1,s2);                             //Compare the strings using inbuilt function and store the result in x.
    if(x==0)                                     //Check if x is 0.
    {
        printf("s1 and s2 are same\n");          //Display that the strings are same.
    }
    else                                         //if x is not 0.
    {
        printf("s1 and s2 are not same\n");      //Display that the strings are not same.
    }
}
