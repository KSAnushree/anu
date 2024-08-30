#include<stdio.h>
int main(){
      int item [3];

      printf("enter item_1 :" );
      scanf("%d",&item[0]);

      printf("enter item_2 :");
      scanf("%d",& item[1]);

      printf("enter item_3:");
      scanf("%d",&item[2]);

      printf("item_1=%d,\n item_2= %d,\n item_3=%d\n",item[0],item[1],item[2] );

     int sum = item[0]+item[1]+item[2];
     printf("sum is : %d\n", sum);

     float final_price =sum*0.05;
     printf("final price is : %f\n", final_price);

     int total = sum + final_price;
     printf("total is : %d", total);

return 0;
}
