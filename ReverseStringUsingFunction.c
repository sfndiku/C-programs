#include <stdio.h>
#include <string.h>
void reverse(char *);
void main() 
{
    char a[100];
    printf ("Enter string: ");
    scanf("%s",&a);
    reverse(&a[0]);
}
void reverse(char *y)
{
    int len=strlen(y),i,j=0;
    char arr[100];

    for(i=len;i>=0;i--){
        // printf("%c",y[i-1]); // this prints in reverse order
        arr[j]=y[i-1];
        j++;
    }
    
    printf("%s",arr);
}