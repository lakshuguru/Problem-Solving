#include<stdio.h>
void main(){
    int a[]={19,42,56,12,69,77},i=0,c=0;
    while(a[i]!='\0'){
        ++c;
        i++;
    }
    printf("%d",c);
    int s=sizeof(a)/sizeof(int);
    printf("\n%d",s);
}