#include <stdio.h>

int sum(int n)
{
    n%=10;
    return n+sum(n/10);
}

int main() {

    int n;
    scanf("%d", &n);

    printf("%d\n", sum(n));

    return 0;

}
