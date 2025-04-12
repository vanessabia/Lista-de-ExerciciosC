#include <stdio.h>
#include <conio.h>

const int ORDEM = 5;

void main(){ 
       
        int i, j, mat[ORDEM][ORDEM], n;

      for(i=0;i<ORDEM;i++){
        for(j=0;j<ORDEM;j++){
            printf("Informe um numero:");
            scanf("%d",&mat[i][j]);
        }
      }

     printf("Informe um numero N:");
     scanf("%d",&n);
     int cont=0;

      for(i=0;i<ORDEM;i++){
        for(j=0;j<ORDEM;j++){
            if(mat[i][j] == n){
                cont++;
            }
        }
      }

      printf("O numero %d aparece %d vezes",n,cont);

    getch();






}