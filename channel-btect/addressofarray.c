#include<stdio.h>
void main(){
    int a[3]={4,6,1};
    
    for(int i=0;i<3;i++){
        printf("%d\t",&a[i]);
        printf("%x\t",a[i]);
    }
}

//size of int 4bytes
// the index starts from 0 coz, ---->  base_add+(index*size(dtype))

//other way of displaying the address
/*
"%d",a
base address"%d",a+0
address of 5th element:    "%d",a+4
*/

//other way of displaying the array element
/*
first data:    "%d",*a
first data:    "%d",*(a+0)
second data:   "%d",*(a+1)
*/