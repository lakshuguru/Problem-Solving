#include <stdio.h>

void main() {
   unsigned int x = -9; 
   int y = ~0; 
   printf("%d \n%d",x,y);
   if (x == y){
      printf("same"); 
   }
   else
      printf("not same");
      
/*
    char a = 012;   //is equivalent to '\012' ie. 12 in octal and  10 in decimal
    printf("%d", a);
    */
/*
   printf("%d\n",1==8);
   */
}