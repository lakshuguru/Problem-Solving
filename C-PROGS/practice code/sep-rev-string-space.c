// to seperate the string with space and reverse the string

#include<stdio.h>
#include<string.h>
void main(){
    char s[50];
    printf("enter string: ");
    scanf("%[^\n]s",&s);      // instead of using gets() to include words after space use %[^\n]s ie., not until new line
    int i=0;
    while(s[i]!='\0'){
        printf("%c ",s[i++]);
    }

    int n=strlen(s);
    while(n!=0){
        printf("%c ",s[--n]);
    }
}