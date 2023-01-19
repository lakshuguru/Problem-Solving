#include<stdio.h>
#include<conio.h>
int main(){
    int a[5],c,i;
    c=0;
    for(i=0;i<5;i++){
      printf("enter the mark : ");
      scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
      printf("%d\t",a[i]);
      c+=a[i];
    }
    printf("\ntotal mark is : %d",c);
    printf("\npercentage is : %d",c/5);
    return 0;
}