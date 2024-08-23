#include<stdio.h>

int main (){
int a;
printf("enter number :");
scanf("%d", &a);
 
 int sum=0;
while(a!=0){
sum = sum+a;
printf("enter number:");
scanf("%d",&a);
}
 printf("sum is :%d",sum );

return 0;
}