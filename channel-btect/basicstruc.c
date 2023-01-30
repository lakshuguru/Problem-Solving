#include<stdio.h>
struct person{
    char name[20];
    long int number;
};

void main(){
    struct person p;
    p.name[20]="lakshanaa";
    printf("%s",p.name);
}