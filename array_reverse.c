#include <stdio.h>
// reverse order of an array
int main()
{
    int a[5] = {0, 1, 2, 3, 4};

    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d \t", a[i]);
    }

    printf("\n");

    for (i =5; i >= 0; i--)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}