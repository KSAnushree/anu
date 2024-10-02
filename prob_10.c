#include <stdio.h>
// count number of digits.
int main()
{
    int n;
    printf("enter number:");
    scanf("%d", &n);

    int i = 0;
    while (n != 0)
    {
        n = n / 10;
        i++;
    }
    printf("The number of digits in an integer is : %d", i);
    return 0;
