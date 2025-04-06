#include<stdio.h>
int main()
{
    char grade = 'c';
    switch(grade)
    {
        case 'c':
        printf("\n outstanding");
        break;
        case 'a':
        printf("\n oversmart");
        break;
        case 'b':
        printf("\n good");
        break;
        case 'f':
        printf("\n very bad");
        break;
        case 'm':
        printf("\n fail");
        break;
        default:
        printf("\n invalid grade");
        break;
        

    }
}