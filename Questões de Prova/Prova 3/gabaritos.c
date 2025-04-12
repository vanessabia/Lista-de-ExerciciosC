#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
const int TAMANHO = 10;

void lerVetor(char vet[], int tamanho){
    int k;
    for(k=0;k<tamanho;k++){
        fflush(stdin);
        printf("Informe a resposta da questao %d: \n",k+1);
        scanf("%c",&vet[k]);
    }
}

int Acertos(char vet1[], char vet2[], int tamanho){
    int k, cont=0;
     for(k=0;k<tamanho;k++){
        if(vet1[k]==vet2[k]){
            cont++;
        }
     }
     return cont;
}

void main(){
    char vet1[TAMANHO], vet2[TAMANHO];
    int k;
    printf("Lendo gabarito: \n ");
    lerVetor(vet1,TAMANHO);

    for(k=0;k<TAMANHO;k++){
        printf("Lendo cartao resposta candidato %d: \n",k+1);
        lerVetor(vet2,TAMANHO);
        int resul = Acertos(vet1,vet2,TAMANHO);
        printf("O candidato %d acertou %d questoes \n", (k+1),resul);
    }
    getch();
}