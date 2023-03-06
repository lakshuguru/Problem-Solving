#include<stdio.h>
void main(){
    int a[]={2,3,5,7,9},t=9,l=5,n=0,i,j;
    for(i=0;i<l-1;i++){
        for(j=i+1;j<l;j++){
            if(a[i]!=a[j]){
                n=a[i]+a[j];
                if(n==t){
                    printf("\nthe added index matching the target num:---%d---%d",i,j);
                    break;
        }
            }
    }
    }
}



//solved