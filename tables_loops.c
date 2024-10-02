#include <stdio.h>
int main()
{
   int n;
   printf("enter number :");
   scanf("%d", &n);

   for (int i = 1; i <= 10; i++)
   {
      printf("%d\n", n * i);
   }
   printf("enter number:");
   scanf("%d", &n);

   for (int i = 10; i >= 1; i--)
   {
      printf("%d\n", n * i);
   }
   return 0;
}