#include<stdio.h>
#include<string.h>

int main(){
    int i,j,s,t;
    char m[70]="hai, welcome to design and analysis of data structure";
    char p[20]="design";
    s=strlen(m);
    t=strlen(p);
    for(i=0;i<s;i++){
        j=0;
        while (j<t && m[i+j]==p[j])
        {
            j++;
            if(j==t){
                printf("pattern found at the index \n");
            } 
        }
    }
    printf("pattern not found\n"); 
}