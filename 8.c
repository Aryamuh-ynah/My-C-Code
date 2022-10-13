#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int* ptr1;
    int* ptr2 = ptr1 + (row*col);/*if ptr1+(row*col) is not there then runtime error is given*/
    int* ptr3 = ptr2 + (row*col);
    for(int i=1;i<=(row*col);i++)
    {
        scanf("%d",(ptr1+i));
    }
    for(int i=1;i<=(row*col);i++)
    {
        scanf("%d",(ptr2+i));
        *(ptr3+i)=(*(ptr1+i) + *(ptr2+i));
    }
    for(int i=1;i<=(row*col);i++)
    {
        printf("%d ",(*(ptr3+i)));
        if(i%col == 0) printf("\n");
    }
    return 0;
}
