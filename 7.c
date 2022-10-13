#include<stdio.h>

int main()

{
      int a, b , c;
    printf("Input 3 numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a<b && a<c)
    {
        printf(" Smallest number = %d", a);
    }
     else if(b<a && b<c)
    {
        printf(" Smallest number = %d", b);
    }
     else
    {
        printf(" Smallest number = %d", c);
    }


    return 0;
}
