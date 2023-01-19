#include<stdio.h>

void main(){
    char s[]="madam",f[5],b[5];
    int c=0;
    printf("ghjk");
    while (s[c]!='\0'){
        printf("\nghjk");
        c++;
    }
    for(int i=0;i<c;i++){
        f[i]=s[i];
    }
    for(int j=c-1;j>=0;j++){
        b[j]=s[j];
    }
    if(f==b){
        printf("the given string is palindrome");
    }
    else{
        printf("not a palindrome");
    }
    
}