#include <stdio.h>
#include <conio.h>
const int ORDEM=5;

void diagonalPrincipal(float mat[ORDEM][ORDEM], int n){
    if (n==0){
        printf("%.2f",mat[n][n]);
    }
     else{
        diagonalPrincipal(mat,n-1);
        printf("%.2f",mat[n][n]);
    }

}


void main(){
    float  mat[ORDEM][ORDEM];
    int i,j,n;

    for(i=0;i<ORDEM;i++){
        for(j=0;j<ORDEM;j++){
            printf("informe um numero: ");
            scanf("%f",&mat[i][j]);
        }
    }

    printf("informe um numero entre 1 e 5:");
    scanf("%d",&n);
    diagonalPrincipal(mat,n-1);
    getch();
}