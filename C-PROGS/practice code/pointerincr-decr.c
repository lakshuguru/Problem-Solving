//increment and decrement with pointers (*++ptr, *ptr++, *--ptr, *ptr--, *(ptr++), (*p)--)

#include<stdio.h>
void main(){
    int a[]={4,2,78,42,1};
    int *p=a, *q=&a[2];
    printf("(*p)++: %d, (*p)++: %d, *(++p): %d",(*p)++,(*p)++,*(++p)); //right to left evaluation is done here acc. to assoc
    printf("\n*p: %d",*p);
    printf("\n(*p)++: %d",(*p)++);
    printf("\nq--: %d",*q--);
    printf("\n(*(q+2))--: %d",(*(q+2))--);
    printf("\n(*(p++ -2))-1: %d",(*(p++ -2))-1);
}
