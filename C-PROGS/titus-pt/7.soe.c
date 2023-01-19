//  doubt(code)  ---> sum of even numbers
#include<stdio.h>
void main(){
    int b,a=0;
    b=0;
    for(b=0;b<=100;b++){
        if(b%2==0){
            a+=b;
        }
    }
    printf("%d",a);

}