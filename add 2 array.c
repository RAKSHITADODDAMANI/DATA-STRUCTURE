#include<stdio.h>
void read(int [],int);
void display(int [],int);
void add(int [],int [],int [],int);
main()
{
    int a[100],c[100],n;
    int b[100];
    printf("Enter the value of n\n");
    scanf("%d",&n);
    if (n<=0)
    {
        printf("Invalid\n");
    }
    else
    {
        read(a,n);
        read(b,n);
        display(a,n);
        printf("\n");
        display(b,n);
        add(a,b,c,n);
        printf("\n");
        display(c,n);
    }
}
void read(int a[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void display(int a[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
void add(int a[100],int b[100],int c[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
    }
}
