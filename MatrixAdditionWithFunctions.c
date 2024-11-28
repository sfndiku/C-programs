#include <stdio.h>
int i,j;
void MatRead(int p,int q,int ar[p][q],char c){
    int temp;
    printf("Enter Matrix %c\n",c);
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            printf(":");
            scanf("%d",&ar[i][j]);
        }
    }
}

void MatDisplay(int p,int q,int ar[p][q],char c){
    printf("Enter Matrix %c:\n",c);
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            printf("%d\t",ar[i][j]);
        }
        printf("\n");
    }
}


void MatAdd(){
    int p,q,i,j;
    printf("Type the Rows: ");
    scanf("%d",&p);
    printf("Type the Coloums: ");
    scanf("%d",&q);
    int a[p][q],b[p][q],c[p][q];
    MatRead(p,q,a,'A');
    MatRead(p,q,b,'B');
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    MatDisplay(p,q,c,'C');
}








void main() 
{
    int n;
    printf("Matrix Menu:\n1 for Addition\n2 for Multiplication\n3 for Tranpose\n:");
    scanf("%d",&n);
    switch(n){
        case 1: MatAdd();break;
        // case 2: MatMulti();break;
        // case 3: MatTrans();break;
        default: printf("\nInvalid Number.");
    }
}