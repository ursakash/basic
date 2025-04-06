//printing positive number ,negative number and zero
#include<stdio.h>
int main()
{
    int num;
    printf("\n Enter any number :");
    scanf("\n %d",&num);
    if(num==0)
    {
        printf("\n zero");
    }
    else if(num>0)
    {
        printf("\n postive number");

    }
    else {
    printf("\n negative number");
    }
    return 0;
}