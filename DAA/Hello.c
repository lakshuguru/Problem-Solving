#include<stdio.h>

int main(){
    int a[]={10,20,30};
    int i, *ptr;
    ptr=&a[0];    // ptr=a gives the same op
    for(i=2;i>=0;i--){
        printf("%d",*ptr);
    }
    return 0;
}