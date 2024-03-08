///Write a modular C program to calculate the area and circumference of a circle using pointer.
#include<stdio.h>
void area_cir(float r,float *a,float *c)     //Function definition to find area and circumference of a circle.
{
    *a=3.142*r*r;                            //Formula to find the area of a circle.
    *c=2*3.142*r;                            //Formula to find the circumference of a circle.
}
main()
{
    float r,area,c;                          //Initialize variables to store radius ,area and circumference.
    printf("Enter the radius of the circle\n");  //Display to enter the radius value.
    scanf("%f",&r);                              //Read the value of radius.
    area_cir(r,&area,&c);                        //Call area_cir function to find area and circumference of a circle.
    printf("Area of circle=%f\nCircumference of circle=%f",area,c);  //Display the result.
}
