#include<stdio.h>
int main()
{
    int num;
    float fnum;
    char ch;
    char str[10];
    double dnum;
    short snum;
    long int lnum;
    printf("\n Enter the values :");
    scanf("%d %f %c %s %lf %hd %ld",&num,&fnum,&ch,str,&dnum,&snum,&lnum);
    printf("\n int=%d float=%f char=%c string=%s double=%lf short=%hd long=%ld",num,fnum,ch,str,dnum,snum,lnum);
    return 0;
}