///Write a modular C program to store and display student information.
#include<stdio.h>
#include<string.h>
struct student{                                  //structure for storing heterogeneous data.
     char name[30];                              //Initialize character array to store the name of the student.
     char USN[12];                               //Initialize character array to store the USN of the student.
     int roll_no;                                //Initialize integer to store the roll number of the student.
     char dept[30];                              //Initialize character array to store the department name of the student.
};
void read(struct student s[500],int n)           //Function definition to read the student information.
{
    int i;                                       //Variable declaration of counter.
    for(i=0;i<n;i++)                             //For loop till all n students information is read.
    {
        printf("Enter the name\n");              //Display to enter name of the student.
        scanf("%s",s[i].name);                   //Read the name of the student.
        printf("Enter the roll no\n");           //Display to enter roll number of the student.
        scanf("%d",&s[i].roll_no);               //Read the roll number of the student.
        printf("Enter the department\n");        //Display to enter department name of the student
        scanf("%s",s[i].dept);                   //Read the department name of the student.
        printf("Enter the USN\n");               //Display to enter USN of the student
        scanf("%s",s[i].USN);                    //Read the USN of the student.
    }
}
void display(struct student s[500],int n)        //Function definition to display the student information.
{
    int i;                                       //Variable declaration of counter.
    for(i=0;i<n;i++)                             //For loop till all n students information is displayed.
    {
        printf("\nName:%s",s[i].name);           //Display name of the student.
        printf("\nRoll no:%d",s[i].roll_no);     //Display Roll number of the student.
        printf("\nDepartment:%s",s[i].dept);     //Display Department name of the student.
        printf("\nUSN:%s",s[i].USN);             //Display USN of the student.
    }
}
main()                                          //main function.
{
    struct student s[500];                      //Structure declaration assuming there are maximum 500 students.
    int n;                                      //variable declaration of variable to store the number of students.
    printf("Enter the number of students\n");   //Display to enter the number of students.
    scanf("%d",&n);                             //Read the number of students.
    read(s,n);                                  //Call read function to store the students information.
    display(s,n);                               //Call display function to display the students information.
}
