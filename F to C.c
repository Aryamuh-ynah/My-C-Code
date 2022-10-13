#include<stdio.h>

void main()

{
    char a[10], r[10];
    char *stp, *reverse;
    *stp=a;
    *reverse=r;
    int i=-1;
    scanf("%s", a);
    while(*stp)
    {
        stp++;
        i++;

    }
    while(i>=0)
    {
        stp--;
        *reverse=*stp;
        reverse++;
        --i;
    }
    *reverse='\0';
    printf("%s\n", *reverse);

}
