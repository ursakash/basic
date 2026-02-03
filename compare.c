#include<stdio.h>
int main()
{
    int num1 , num2 ;
    printf("Enter two number :");
    scanf("%d %d",&num1,&num2);
    if(num1>num2)
    {
        printf("Gretest Number is %d",num1);

    }
    else
    {
        printf("Gretest number is %d ",num2);

    }
    return 0;
    
}