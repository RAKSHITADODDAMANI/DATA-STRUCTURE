#include<stdio.h>
float addition(float,float);
float subtraction(float,float);
float multiplication(float,float);
float division(float,float);
int modulus(float,float);
main()
{
    float x,y,res;
    char ch;
    printf("Enter an operator and 2 numbers\n");
    scanf("%c%f%f",&ch,&x,&y);
    switch(ch)
    {
        case '+':res=addition(x,y);
                 break;
        case '-':res=subtraction(x,y);
                 break;
        case '*':res=multiplication(x,y);
                 break;
        case '/':if(y!=0)
                   res=division(x,y);
                else
                    printf("error\n");
                    exit(0);
                 break;
         case '%':res=modulus(x,y);
                 break;
    }
    printf("RESULT=%f",res);
}
float addition(float a,float b)
{
    float r;
    r=a+b;
    return r;
}
float subtraction(float a,float b)
{
    float r;
    r=a-b;
    return r;
}
float multiplication(float a,float b)
{
    float r;
    r=a*b;
    return r;
}
float division(float a,float b)
{
    float r;
    r=a/b;
    return r;
}
int modulus(float a,float b)
{
    int r;
    r=(int)a%(int)b;
    return r;
}

