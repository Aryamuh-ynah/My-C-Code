#include<stdio.h>

void main()

{
    int a=1, *p;
   char c='a';
   float r=10.25;
   p=&a;
   printf("Value of character = %c, Address of character = %u\n", c, &c);
    printf("Value of integer = %d, Address of integer = %p\n", p, &a);
    printf("Value of real = %f, Address of real = %p\n", r, &r);
    //printf("Value of biginteger = %lld, Address of biginteger = %u", biginteger, &biginteger);

}
