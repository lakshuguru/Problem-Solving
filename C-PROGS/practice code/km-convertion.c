#include<stdio.h>
#include<conio.h>
void main(){
    long int a,b,c;
    double d,e;
    printf("enter the kilometer between two cites : \n");
    scanf("%d",&a);
    b=a*1000;
    printf("the distance in meter is : %ld mts\n",b);
    c=a*10000;
    printf("the distance in centimeter is : %ld cm\n",c);
    d=a*3280.84;
    printf("the distance in feets is : %f feets\n",d);
    e=a*39370.079;
    printf("the distance in inches is : %f inches\n",e);
    
}