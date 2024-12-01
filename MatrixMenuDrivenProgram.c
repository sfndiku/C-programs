#include <stdio.h>
#include <stdlib.h>
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
    printf("Matrix %c:\n",c);
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
 

void MatMulti(){
    
    int p,q,r,s,i,j,k;
    printf("Row and Coloum of First Matrix: \n");
    scanf("%d %d",&p,&q);

    printf("Row and Coloum of Second Matrix: \n");
    scanf("%d %d",&r,&s);
    if(q!=r){
        printf("This Matrix is not Possible");
        exit(0);
    }
    int a[p][q], b[r][s], mul[p][s];

    for(i=0;i<p;i++){
        for(j=0;j<s;j++){
            mul[i][j] = 0;
        }
    }

    MatRead(p,q,a,'A');
    MatRead(r,s,b,'B');

    for (i = 0; i < p; i++) {
        for (j = 0; j < s; j++) {
            for (k = 0; k < q; k++) {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    MatDisplay(p,s,mul,'M');


}

void MatTrans(){
    int p,q;
    printf("Row and Coloum of the Matrix: \n");
    scanf("%d %d",&p,&q);
    int a[p][q],tran[q][p];
    MatRead(p,q,a,'A');

    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            tran[j][i]=a[i][j];
        }
    }
    MatDisplay(p,q,a,'A');
    printf("\n");
    MatDisplay(q,p,tran,'T');
}


void main() 
{
    int n;
    printf("Matrix Menu:\n1 for Addition\n2 for Multiplication\n3 for Tranpose:\n");
    scanf("%d",&n);
    switch(n){
        case 1: MatAdd();break;
        case 2: MatMulti();break;
        case 3: MatTrans();break;
        default: printf("\nInvalid Number.");
    }
}