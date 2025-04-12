#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

const int TAMANHO = 10;

void main(){
    char vet[TAMANHO], resposta;
    int k, total=0;

    for(k=0;k<TAMANHO;k++){
    fflush(stdin);
    printf("Informe o gabarito da questao %d:\n", k+1);
    scanf("%c",&vet[k]);
    }

    printf("\n");

    for(k=0;k<TAMANHO;k++){
    fflush(stdin);
    printf("Informe a resposta da questao %d:\n", k+1);
    scanf("%c",&resposta);
      if(resposta == vet[k]){
        total++;
      }
    }
    
    printf("O candidato acertou %d questoes \n",total);
  getch();
}