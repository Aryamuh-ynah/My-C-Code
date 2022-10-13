
#include <stdio.h>

int main()
{
    printf("Enter Matrix size:\n");
    int n1, n2, n3, n4;
    scanf("%d %d %d %d",  &n1, &n2, &n3, &n4);

    while(n2!=n3)
    {
        printf("Error your input does not equal to A matrix column and B matrix row\n");
        printf("please enter row and colunm of A and B matrix:\n");
        scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    }

    int A[n1][n2], B[n3][n4], C[n1][n4];
     printf("Enter 1st Matrix element:\n");
    for(int i=0; i<n1; ++i)
    {
        for(int j=0; j<n2; ++j)
            scanf("%d", &A[i][j]);
    }
    printf("Enter 2nd Matrix element:\n");
    for(int i=0; i<n3; ++i)
    {
        for(int j=0; j<n4; ++j){
            scanf("%d", &B[i][j]);
        }
    }

    for(int i=0; i<n1; ++i) for(int j=0; j<n4; ++j) C[i][j] = 0;
    for(int i=0; i<n4; ++i)
    {
        int i2 = 0;
        for(int j = 0; j<n1; ++j)
        {
            int temp = 0;
            for(int k=0; k<n2; ++k)
                temp += A[i2][k]*B[k][i];
            C[j][i] += temp;
            temp = 0;
            if(i2!=n2) ++i2;
        }
    }

    for(int i=0; i<n1; ++i)
    {
        for(int j2=0; j2<n4; ++j2)
            printf("%d ", C[i][j2]);
        printf("\n");
    }


    return 0;

}
