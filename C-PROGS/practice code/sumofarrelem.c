#include<stdio.h>
void main(){
    int c=0,s;
    printf("enter size: ");
    scanf("%d",&s);
    int a[s];
    for(int i=0;i<s;i++){
        printf("---%d",i);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<s;i++){
        c=c+a[i];
    }
    printf("\nThe sum of array elements: %d",c);
}