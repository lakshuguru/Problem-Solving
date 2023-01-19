#include<stdio.h>
void main(){
    int a=0,b;
    for(b=0;b<=100;b++){
        if(b%2!=0){
            a+=b;
        }
    }
    printf("%d",a);
}