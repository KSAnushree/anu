#include<stdio.h>
  
  void namaste();
  void bonjour();
  
  int main(){
     char ch;
     printf("enter i if indian & f if french :");
     scanf("%c", &ch);
     
     if (ch == 'i'){
      namaste();
     }
      else if (ch == 'f') {
        bonjour();
      }

      else {
        printf("thank you !");
      }
    return 0;
  }

  void namaste(){
     printf("namaste\n");
  }

  void bonjour(){
    printf("bonjour\n");
  }