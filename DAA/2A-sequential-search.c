#include<stdio.h>
int main()
{
    int n=5, flag=0, i, data;
    printf("no.of elem n= %d ",n);
    printf("number to be searched is : ");
    scanf("%d",&data);
    int a[n];
    printf("\nenter the elem : ");
    for(i=0;i<n;i++){
        printf("\n---------");
        scanf("%d",&a[i]);
    }
    printf("array : %d",a);
    for(i=0;i<n;i++){
        if(a[i]==data)
        {
            printf("the given data is found in a[%d] pos",i);
            flag=1;
        break;    
        }
    }

    
}