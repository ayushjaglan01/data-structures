#include<stdio.h>
struct student
{
    char name[25] ;
    int rollno;
    int marks[10];
};

int main()
{   int n;
struct student student;

    printf("Enter the name: ");
    scanf("%s",student.name);
    printf("Enter roll no.");
    scanf("%d",&student.rollno);
    printf("Enter the no of subject: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("Enter marks of %dth subject: ",i);
        scanf("%d",&student.marks[i]);
    }
    printf(" Name is:%s\n",student.name);
    printf(" Roll no is: %d\n",student.rollno);
    for(int i=1;i<=n;i++)
    {
        printf(" Marks in %dth subject is:  %d\n",i,student.marks[i]);
    }


    return 0;
}