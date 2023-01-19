#include<stdio.h>
#include<conio.h>
void main(){
    int f;
    float c;
    printf("enter the fahrenheit : \n");
    scanf("%d",&f);
    c=(f-32)*5/9;
    printf("fahrenheit celsius to is : %f\n",c);
}
// f=c*((9/5)+32)
