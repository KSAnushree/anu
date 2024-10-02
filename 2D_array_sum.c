#include <stdio.h>
// 2D array rows and columns sum output
int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int i, j;
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            sum = sum + a[i][j];
        }
        printf("sum of row is  :%d\n", sum);
        sum = 0;
    }

    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            sum = sum + a[i][j];
        }
        printf("sum column is :%d\n", sum);
        sum = 0;
    }
    return 0;
}