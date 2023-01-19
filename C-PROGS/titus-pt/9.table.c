#include<stdio.h>
void main(){
    int i=0,j=0,n;
    printf("enter the table num you wish to display : ");
    scanf("%d",&n);
    for(i;i<11;i++){
        for(j;j<11;j++){
            n=n*j;
            printf("%d ",n);
        }
    }
}    