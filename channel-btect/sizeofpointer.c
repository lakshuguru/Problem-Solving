#include<stdio.h>
void main(){
    char a='u',*p;
    p=&a;
    printf("%d",sizeof(p));
}