#include <stdio.h>

void main() {
   unsigned int x = -1; 
   int y = ~0; 
   if (x == y){
      printf("%d \n%d",x,y);
      printf("same"); 
   }
   else
      printf("not same");
}