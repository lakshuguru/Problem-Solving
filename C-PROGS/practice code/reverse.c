#include<stdio.h>
#include<string.h>
void main(){
    char s[]="hello";
    int l=strlen(s);    // 5
    printf("the original string: \n%s",s);
    printf("\nthe reversed string:\n");
    for(int i=(l-1);i>=0;i--){            
        printf("%c",s[i]);
    }
}


/*to find the length of the string without library
#include <stdio.h>
int main()
{
  char s[1000];
  int c = 0;

  printf("Input a string\n");
  gets(s);

  while (s[c] != '\0')
    c++;

  printf("Length of the string: %d\n", c);

  return 0;
}
*/