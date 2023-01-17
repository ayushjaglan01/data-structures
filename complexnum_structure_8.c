#include<stdio.h>
struct complex
{
 int real;
 int imagnary;
};
void main()
{ struct complex num1,num2;
    printf("Enter real part of first number: ");
    scanf("%d",&num1.real);
    printf("Enter imagenary part of first number: ");
    scanf("%d",&num1.imagnary);
    printf("Enter real part of second  number: ");
    scanf("%d",&num2.real);
    printf("Enter imagenary part of second number: ");
    scanf("%d",&num2.imagnary);
    printf("\nSum is: %d+%dj",num1.real+num2.real,num1.imagnary+num2.imagnary);
    printf("\nDifference is: %d+(%dj)",num1.real-num2.real,num1.imagnary-num2.imagnary);
    printf("\nProduct  is: %d+%dj",num1.real*num2.real,num1.imagnary*num2.imagnary);
    
    printf("\nQuotient  is: %f+%fj",(num1.real+0.0)/num2.real,(num1.imagnary+0.0)/num2.imagnary);
    printf("\n%f",8.0/4);

}
