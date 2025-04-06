//determine the given charecter is vowel or not
#include<stdio.h>
int main()
{
    int ch;
    printf("\n Enter any charecter :");
    scanf("%lc",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        printf("\n vowel");

    }
    else {
    printf("\n not a vowel");

    }
    return 0;

}