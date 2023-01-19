#include<stdio.h>
#include<conio.h>
void main(){
    int l,b,r;
    printf("enter length and breadth and radius : \n");
    scanf("%d\t%d\t%d",&l,&b,&r);
    printf("\narea : %d ",l*b);
    printf("\nperimeter : %d",2*(l*b));
    printf("\narea of circle : %d",2*(3.14*r));
    printf("\ncircumference of circle : %d",3.14*(r*r));
}