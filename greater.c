#include<stdio.h>
int main()
{
    int x,y;
    printf("\n Enter two number :");
    scanf("\n %d %d",&x,&y);
    if(x==y)
    {
        printf("equal number");
    }
    else if (x>y) {
        printf("\n %d greater than %d",x,y);
    }
    else {
    printf("\n %d smaller than %d",x,y);
    }
    return 0;
}