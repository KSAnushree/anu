#include <stdio.h>
#define max 50
// Matrix Multiplication
int main()
{
    int a[max][max];
    int ar;
    int ac;

    printf("enter the rows and columns for matrix a :");
    scanf("%d %d", &ar, &ac);

    printf("enter the elements of matrix a :\n");
    for (int i = 0; i < ar; i++)
    {
        for (int j = 0; j < ac; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int b[max][max];
    int br;
    int bc;

    printf("enter the rows and columns for matrix b :");
    scanf("%d %d", &br, &bc);

    printf("\n");

    if (br != ac)
    {
        printf("invalid");
    }

    else
    {

        printf("enter the elements of matrix b :\n");
        for (int i = 0; i < br; i++)
        {
            for (int j = 0; j < bc; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
    }

    printf("\n");

    int product[max][max];
    int sum = 0;

    for (int i = 0; i < ar; i++)
    {
        for (int j = 0; j < bc; j++)
        {
            for (int k = 0; k < ac; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
            product[i][j] = sum;
            sum = 0;
        }
    }

    printf("resultant matrix : \n");

    for (int i = 0; i < ar; i++)
    {
        for (int j = 0; j < bc; j++)
        {
            printf("%d\t", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}