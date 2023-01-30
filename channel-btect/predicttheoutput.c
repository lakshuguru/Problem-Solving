#include<stdio.h>
/*
void main(){
    int a[]={9,5,2,4,7};
    int *p;
    p=&a[2];
    printf("%d\n",*p);
    printf("%d\n"*(p+1));
    printf("%d",*(p-1));
}
*/
/*
void ptr(char**);
void main(){
char *a[]={"abc","fgk","rty","tyu"};
ptr(a);
}
void ptr(char **p){
    char *t;
    t=(p+=sizeof(int))[-2];   //t=p[4-1]---->t=p[3]
    printf("%s\n",t);
}
*/
/*
void main(){
    int a=130;    
    char *p;
    p=(char *)&a;     //cyclic rotation
    printf("%d",*p);
}
*/
/*
void main(){
    int i=3;
    int *j;
    int **k;
    j=&i;
    k=&j;
    k++;
    printf("%d",**k);
}      
*/
/*
void main(){
    int i=3;
    int *j;
    j==&i;
    j++;
    printf("%d",*j);
}
*/
/*
void main(){
    char *p="hello";
    char a[22];
    strcpy(a,"world");
    printf("\n%s%s ",p,a);
}
*/
/*
void main(){
    char *p="hello";
    char a[22];
    *p="world";
    printf("\n%s%s ",p,a);
}
*/
/*
void main(){
    char *p="helloworld";
    pritf("%s",p+4);
}
*/
/*
void main(){
    char *p="campus";
    printf("%c\n",*&*p);
}
*/
/*
void main(){
    register a=1;
    int far *p;
    p=&a;
    printf("%u",p);
}
*/
/*
void main(){
    char a=30, b=5;
    char *p=&a, *q=&b;
    printf("%d",p-q);         //when we subtract same datatype the result is always 1
}
*/
/*
unsigned long int(*function())[5]{
    static unsigned long int a[5]={2,3,5,7,11};
    printf("%d",*a)
    return &a;
}
void main(){
    unsigned long int(*p)[5];
    p=function();
    printf("%d",*(*p+4));
}
*/

