#include<stdio.h>
int main()
{
    int length , breadth , height , volume ;
    printf("Enter length ,breadth and height of cuboid :");
    scanf("%d %d %d",&length,&breadth,&height);
    volume = length * breadth * height;
    printf("volume is %d ", volume);
    return 0;
    

}