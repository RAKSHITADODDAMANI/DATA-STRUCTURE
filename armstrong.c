#include<stdio.h>
int armstrong(int);
main()
{
    int n,res;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    res=armstrong(n);
    if(res==n)
        printf("Number is armstrong\n");
    else
        printf("Number is not armstrong\n");
}
int armstrong(int n)
{
    int sum=0,count=0;
    int ld;
    int m=n;
    while(n)
    {
        ld=n%10;
        count++;
        n=n/10;
    }
    if (count==3)
    {
         while(m)
         {
            ld=m%10;
            sum=sum+(ld*ld*ld);
            m=m/10;
         }
    }
    else
    {
        while (m)
        {
           ld=m%10;
           sum=sum+(ld*ld*ld*ld);
           m=m/10;
        }
    }
    return sum;
}
