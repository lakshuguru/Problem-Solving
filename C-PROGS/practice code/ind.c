#include <stdio.h>
int main() {

    int i,n;
    scanf("%d",&n);
    int l[n];
    for(i=0;i<=n;i++){
        scanf("%d",&l[i]);
        if(i==l[i]){
            printf("%d",l[i]);
        }
    }
    return 0;
}


//this code has some problem
