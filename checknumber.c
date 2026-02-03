#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    if (num == 0)
    {
        printf("Zero Number");
    }
    else if (num > 0)
    {
        printf("Positive number ");
    }
    else
    {
        printf("Negative Number ");
    }
    return 0;
}