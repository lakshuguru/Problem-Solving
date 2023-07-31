#include<stdio.h>
int main(){
    char *ptr;
    char str[]="how are you?";
    int a=123;
    int *p;
    p=&a;
    printf("%x hexadecimal",a);
    ptr=str;
    ptr+=4;
    printf("%s",ptr);
    return 0;

}
    
