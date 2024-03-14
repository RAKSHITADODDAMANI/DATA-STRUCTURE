#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void read(char [100][100],int,int);
void sum(char [100][100],int,int);
main()
{
    char a[100][100];
    int r,c;
    scanf("%d%d",&r,&c);
    if(r<=0 || c<=0)
    {
        printf("Invalid players and matches");
        exit (0);
    }
    else
    {
        read(a,r,c);
        display(a,r,c);
        sum(a,r,c);
    }
}
void sum(char a[100][100],int r,int c)
{
    int i=0,j,s2=0;
    for(i=0;i<r;i++)
    {
        s2=0;
        for(j=0;j<c;j++)
        {
                if(a[i][j]=='W')
                    s2++;
        }
        printf("Player %d won %d matches\n",i+1,s2);
    }
}
void read(char a[100][100],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
                scanf("%c",&a[i][j]);
        }
    }
}
void display(char a[100][100],int r,int c)
{
    int i,j;
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
                printf("%c ",a[i][j]);
        }
        printf("\n");
    }
}
