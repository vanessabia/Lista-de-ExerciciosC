#include <stdio.h>
#include <conio.h>

const int ORDEM = 5;

int main(){
       int i, j, matriz[ORDEM][ORDEM];
       int vet[ORDEM];

      for(i=0;i<ORDEM;i++){
        for(j=0;j<ORDEM;j++){
            printf("Informe um numero:");
            scanf("%d",&matriz[i][j]);
        }
      }
    
    printf("A soma das colunas da matriz:\n");

    for(j=0;j<ORDEM;j++){
        for(i=0;i<ORDEM;i++){
            vet[j] += matriz[i][j];
        }
    }

    for(j=0;j<ORDEM;j++){
        printf("Coluna %d: %d\n",j+1,vet[j]);
    }
    return 0;
}