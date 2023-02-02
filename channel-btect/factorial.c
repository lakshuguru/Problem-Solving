#include<stdio.h>
void main(){
    int n=4,c=1,d,flag; 
    for(int i=n;i>0;i--){
        c=c*i;
        int l=c;
        while(l!=0){
            d=l%10;         // to separate the last digit
            if(d==1){     
                flag=1;
                break;
            }
        l=l/10;
    }
    }
    printf("%d",c);            
    if(flag){
        printf("yes");
    }
    else{
        printf("no");
    }
}