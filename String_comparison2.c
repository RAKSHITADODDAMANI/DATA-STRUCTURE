///Q) Write a modular C program to Compare two strings without using inbuilt function.
#include<stdio.h>
#include<string.h>
int compare(char s1[],char s2[]);                //Function prototype to compare two strings.
main()
{
    int x;                                       //variable declaration to store the result.
    char s1[100],s2[100];                        //variable declaration of two strings.
    gets(s1);                                    //Read first string.
    gets(s2);                                    //Read second string.
    x=compare(s1,s2);                            //Call compare function to compare the strings and store the result in x.
    if(x==0)                                     //Check if x is 0.
    {
        printf("s1 and s2 are same\n");          //Display that the strings are same.
    }
    else if(x==1)                                //if x is 1
    {
        printf("s1 and s2 are not same\n");      //Display that the strings are not same.
    }
}
int compare(char s1[100],char s2[100])           //Function definition to check if the strings are same or not.
{
    int i=0,j=1;                                 //Variable declaration of counter.
    while(s1[i]!='\0'||s2[i]!='\0')              //Loop till we reach the null character of strings.
    {
        if(s1[i]==s2[i])                         //Check two strings character by character
        {
            j=0;                                 //initialize j as 0;
        }
        else                                     //if any character is not same
        {
            j=1;                                 //initialize j as 1;
            break;                               //Move out of the loop
        }
        i++;                                     //Increment the counter.
    }
    return j;                                    //Return the result.
}
