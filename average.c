#include<stdio.h>
int main()
{
    int num1,num2,num3,num4,num5,avr;
    printf("Enter five number :");
    scanf("%d %d %d %d %d",&num1,&num2,&num3,&num4,&num5);
    avr = num1 + num2 + num3 + num4 + num5 / 5;
    printf("average of five number is %d",avr);
    return 0;
    
}