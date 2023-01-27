#include<stdio.h>
void pal(int m);
/*
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
*/
/*
void main(){
    int x=121;
    int m=x,c=0,z=0;
    while(m!=0){
        if(x>0){
            z=z*10+m%10;
            m=m/10;
        }
        else{
            z=z*10-m%10;
            m=m/10;
        }
    }
   
    //printf("\n%d\t%d",x,z);
    if(z==x){
        printf("true");
    }
    else{
        printf("false");
    }
}
*/

/*
//closest palindrome number;    i/p=1234     o/p=1221

void pal(int m){
    int n=m;
    int i=0;
    while(n!=0){
            i=(i*10)+(n%10);
            n=n/10;
        
    }
    if(m==i){
        printf("\n%d",n);
    }
    else{
        m=m-1;
        printf("\n%d",n);
        pal(m);
    }
    }

void main(){
    int m=1234;
    pal(m);
}

*/


