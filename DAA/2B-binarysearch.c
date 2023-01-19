#include<stdio.h>
int main()
{
    int c,f,l,m,n=7,s,a[100];
    printf("number of elements is :%d and enter the elem ",n);
    for(c=0;c<n;c++){
        printf("-------");
        scanf("%d",&a[c]);
    }
    /*printf("enter value to find\n");
    scanf("%d",&a[c]);*/
     
    printf("enter the value to find :");
    scanf("%d",&s);

    f=0;
    l=n-1;    //  6
    m=(f+l)/2;    // 3

    while(f<=l){       // f<=7
        if(a[m]<s){               //  a[3]< s
            f=m+1;      //4     
            printf("hai");

        }
        else if(a[m]==s){
            printf("%d found at the pos %d : ",s,m+1);
            break;
        }
        else if(f>l){
            printf("not found ! %d isn't present in the list ",s);
        }
        else{
            l=m-1;
            m=(f+l)/2;
            printf("bye");
        }

        return 0;
    }
    
}