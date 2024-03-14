#include<stdio.h>
int binary_no(int);
main()
{
    int n,count;
    printf("Enter the number\n");
    scanf("%d",&n);
    count=binary_no(n);
    printf("No.of digits=%d",count);
}
int binary_no(int n)
{
    int count=0;
    while(n)
    {
        n=n/2;
        count++;
    }
    return count;
}

