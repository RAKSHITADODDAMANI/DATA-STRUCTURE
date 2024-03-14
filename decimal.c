#include<stdio.h>
int bin_decimal(int);
main()
{
    int b,d;
    printf("Enter the value of binary number\n");
    scanf("%d",&b);
    d=bin_decimal(b);
    printf("Decimal=%d",d);
}
int bin_decimal(int b)
{
    int i=1,ld,sum=0;
    while(b)
    {
        ld=b%10;
        b=b/10;
        sum=sum+(ld*i);
        i=i+2;
    }
    return sum;
}
