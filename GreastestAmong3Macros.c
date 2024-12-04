#include <stdio.h>
#define GREASTEST(a,b,c) (a>b?(a>c?a:c):(b>c)?b:c)
int main(){
    int a,b,c;
    printf("Type 3 numbers:\n");
    scanf("%d %d %d",&a,&b,&c);
    int num = GREASTEST(a,b,c);
    printf("\n%d is the greastest of em all",num);
}