#include<stdio.h>
struct marks {
    char name[25];
    int rollno;

    int chemistry_marks;
    int physics_marks;
    int math_marks;

}s[5];
void main()
{
    int n=5;
    float result[6];
    for(int i=1;i<=n;i++)
    {
        printf("Enter name : ");
        scanf("%s",s[i].name);
        printf("Enter roll no: ");
        scanf("%d",&s[i].rollno);
        printf("Enter marks of %s in chemistry: ",s[i].name);
        scanf("%d",&s[i].chemistry_marks);
        printf("Enter marks of %s in physics: ",s[i].name);
        scanf("%d",&s[i].physics_marks);
        printf("Enter marks of %s in math: ",s[i].name);
        scanf("%d",&s[i].math_marks);
        result[i]=(s[i].chemistry_marks+s[i].math_marks+s[i].physics_marks)/3;
    }
    for(int i=1;i<=n;i++)
    {
        printf("\npecentage of %s  is: %f percent \n ",s[i].name,result[i]);
    }
}