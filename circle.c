#include<stdio.h>
int main()
{
    float radius;
    double area,circumference;
    printf("\n Enter the radus :");
    scanf("%f",&radius);
    area = 3.14*radius*radius;
    circumference=2*3.14*radius;
    printf("\n the area is %.2f",area);
    printf("\n the circumference is %.2f",circumference);
    return 0;
    }