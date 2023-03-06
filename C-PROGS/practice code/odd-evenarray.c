#include<stdio.h>
void main(){
    int s;
    printf("enter size: ");
    scanf("%d",&s);
    int a[s],b[s];
    for(int i=0;i<s;i++){
        printf("---%d",i);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<s;i++){
        if(a[i]%2==0){
            printf("\nremainder: %d",a[i]);
            int t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
            printf("\nquotient %d",a[i]);
        }
        
    }
    for(int i=0;i<s;i++){
        printf("---%d",a[i]);
        /*scanf("%d",&a[i]);*/
    }
}


//not solved