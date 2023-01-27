#include<stdio.h>
void main(){
    int m=1729,s,i=0;int n=m;
    while(n!=0){
        s=n%10;
        i+=s;
        n=n/10;
    }
    printf("%d",i);
    if(m%i==0){
        printf("\nthe given num is harshad");
    }
    else{
        printf("the given num is not a harshad number");
    }
}