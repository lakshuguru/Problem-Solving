#include<stdio.h>
void main(){
    int a[]={-1,2,-1,3,2},b[5];
    for(int i=0;i<5;i++){
        //printf("\ni------ %d",i);
        for(int j=0;j<5;j++){
            //printf("\nj------ %d",j);
            if(a[i]==b[j] && i!=j){
                break;
            }
            else{
                b[j]=a[i];
                printf("\n%d",b[i]);
            }
        }
    }

}