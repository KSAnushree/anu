#include <stdio.h>

// print all natural numbers between 1 to n.
int main()
{
    int n;
    printf("enter number :");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}