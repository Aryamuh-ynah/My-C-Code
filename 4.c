#include <stdio.h>

int main()
{

    int n1, n2, n3, n4;
    printf("Enter matrix size:\n");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    while(n2!=n3)
    {
        printf("Error your input does not equal to A matrix column and B matrix row\n");
        printf("please enter row and column of A and B matrix:\n");
        scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    }

    int A[n1][n2], B[n3][n4], C[n1][n4];
    printf("Enter 1st Matrix element:\n");
    for(int i=0; i<n1; ++i)
    {
        for(int j=0; j<n2; ++j)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter 2nd Matrix elemen:\n");
    for(int i=0; i<n3; ++i)
    {
        for(int j=0; j<n4; ++j)
        {

            scanf("%d", &B[i][j]);
        }
    }

  for(i=0; i<=)
    return 0;


}
