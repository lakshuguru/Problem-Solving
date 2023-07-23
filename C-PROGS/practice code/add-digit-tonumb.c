// write a program to add number 2 to every digit in the number ex: ip=121----> op=343

#include<stdio.h>
void main(){
    int n=1234,t,r,m=0;
    while(n!=0){
        t=(n%10)+2;
        n=n/10;
        r=(r*10)+t;
    }
    printf("%d",r);
    while(r!=0){
        t=r%10;
        r/=10;
        m=(m*10)+t;
    }
    printf("\n%d",m);
}