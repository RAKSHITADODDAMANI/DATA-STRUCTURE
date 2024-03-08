///Q) Write a C program to extract all the digits of given integer number.
#include<stdio.h>
main()
{
    int n,ld;                                         //variable declaration to store integer value and the last digit of the number.
    printf("Enter the value of integer number\n");    //Display to enter the integer number.
    scanf("%d",&n);                                   //Read the data.
    while(n!=0)                                       //loop till number is not equal to 0.
    {
        ld=n%10;                                      //Extract the last digit of integer number using modulus operation.
        printf("%d\n",ld);                            //Display the digit.
        n=n/10;                                       //Divide the number by 10 to go to next digit.
    }
}
