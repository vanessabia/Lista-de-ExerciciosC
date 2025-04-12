#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(){
    int i,j, ordem;
    printf("Informe a ordem da matriz:");
    scanf("%d",&ordem);

    int mat[ordem][ordem];
   
    for(i=0;i<ordem;i++){
        for(j=0;j<ordem;j++){
           int posicao = i * ordem + j;
           mat[i][j] = pow(2,posicao);
        }
    }

     for(i=0;i<ordem;i++){
        for(j=0;j<ordem;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    getch;
}