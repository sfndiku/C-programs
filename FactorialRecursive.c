#include <stdio.h>

void Factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++)
        fact*=i;
    printf("Factorial by Non-Recursive Function is %d",fact);
}

int RecursiveFactorial(int n){
    if(n==1)
        return 1;
    else
        return n*RecursiveFactorial(n-1);
}

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n<1)
        return 0;
    Factorial(n);
    int fact = RecursiveFactorial(n);
    printf("\nFactorial by Recursive is %d\n",fact);
}