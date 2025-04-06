//lower case convert into upper case and upper case convert into lower case 
#include<stdio.h>
int main()
{
    int ch;
    printf("\n Enter any charecter");
    scanf("%lc",&ch);
    if(ch>='A' && ch<='Z')
    {
        printf("\n upper case convert into loweer case %c",(ch+32));

    }
    else {
    printf("\n lower case into upper case %c",(ch-32));


return 0;    }


}