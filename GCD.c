#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int GCD(int,int);
int LCM(int,int,int);
main()
{
    int a,b,gcd,lcm;
    printf("Enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    gcd=GCD(a,b);
    lcm=LCM(gcd,a,b);
    printf("GCD=%d\nLCM=%d",gcd,lcm);
}
int GCD(int a,int b)
{
    int r=0;
    while(a)
    {
        r=b%a;
        b=a;
        a=r;
    }
    return b;
}
int LCM(int gcd,int a,int b)
{
    return ((a*b)/gcd);
}
