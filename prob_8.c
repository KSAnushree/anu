#include <stdio.h>
// sum of all even  natural numbers between 1 to n.
int main()
{
    int n;
    printf("enter number:");
    scanf("%d", &n);

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }
    printf("sum is : %d ", sum);
    return 0;
}