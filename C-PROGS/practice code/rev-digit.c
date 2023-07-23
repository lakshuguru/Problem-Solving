#include<stdio.h>
void main(){
    int n=123,t;
    int r=0;
    while(n!=0){
        t=n%10;
        n/=10;
        printf("%d\n",r);
        printf("(%d*10)+%d\n",r,t);
        r=(r*10)+t;
    }
}