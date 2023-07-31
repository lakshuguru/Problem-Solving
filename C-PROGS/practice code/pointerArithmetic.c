// formula:(pointer and number)----> ptr+n= base_address (+ or -) n * sizeog_dtype
//           (pointer-pointer)-----> d= ptr1-ptr2; d/sizeof_dtype  # it's not applied for addition
#include<stdio.h>
void main(){
    int a[]={10,2,3,4,5};
    int *p=a;
    
    //addition 
    printf("%d",*p); //increment within the range of array size
    //p+=3;              //6618624 + 3 * 4 = 6618636
    printf("\n%d",*p);

    //subtraction
    int *q=&a[2];
    int d=p-q;        //6618620-6618616=4   since p and q are pointers, as of formula, 4/4=1. so d=1.ie., one position back.
    printf("\n%d=%d-%d",d,p,q);
    *q=25;
    printf("\nq= %d",*q);
    d=q-p;
    printf("\n%d=%d-%d",d,p,q);
    *p=27;
    printf("\np= %d",*p);
    q=q-3;
    p=p+3;
    printf("\np= %d q=%d",*p,*q);
    d=p-q;
    printf("\n%d=%d-%d",d,p,q);
}