#include<stdio.h>
void main(){
    int a[]={2,7,11,15},t=13,s;
    for(int i=0;i<4;i++){
        for(int j=1;j<4;j++){
            if(a[j]==t-a[i]){
                printf("%d %d",i,j);
            }
        }
        }
    
}  