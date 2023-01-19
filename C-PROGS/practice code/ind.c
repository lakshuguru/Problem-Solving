#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

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
