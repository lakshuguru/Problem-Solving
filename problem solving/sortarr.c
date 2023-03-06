#include<stdio.h>
void main(){
    int a[]={1,2,3,4},t,l=5;
    for(int i=0;i<l;i=i+2){
        t=a[i];
        a[i]=a[i+1];
        a[i+1]=t;
    }
    for(int i=0;i<l;i++){
        printf("%d\t",a[i]);
    }
}