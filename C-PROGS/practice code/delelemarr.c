#include<stdio.h>
void main(){
    int pos,s;
    printf("enter size: ");
    scanf("%d",&s);
    int a[s];
    for(int i=0;i<s;i++){
        printf("---%d",i);
        scanf("%d",&a[i]);
        
    }
    printf("\nposition to delete: ");
    scanf("%d",&pos);
    for(int i=pos-1;i<4;i++){
        a[i]=a[i+1];
    }
    s--;
    
    printf("\nfinal\n");
    for(int i=0;i<s;i++){
        printf("%d\t",a[i]);
    }
}