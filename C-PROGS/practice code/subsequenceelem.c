/*
Given an array A of N integers, find any 3 elements in it 
such that A[i] < A[j] < A[k] and i < j < k.
ip: n=5; a[]={1,2,1,1,3}
op: 1
explanation: a sub-sequence 1 2 3 exist.
*/

#include<stdio.h>
void main(){
    int n=3,a[]={1,2,3},i,j,k;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            for(k=j+1;k<n;k++){
                //printf("\n----> %d",k);
                if((a[i]<a[j]<a[k])){
                    printf("\ni:%d j:%d k:%d",i,j,k);
                    printf("\n%d\t%d\t%d",a[i],a[j],a[k]);
                    break;
                }
                
            }
        }
    }

}