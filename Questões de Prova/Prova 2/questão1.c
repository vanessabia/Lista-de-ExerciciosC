#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

const int TAMANHO = 10;

void main(){
    char vet[TAMANHO];
    int k, p=TAMANHO-1, cont=0;

    for(k=0;k<TAMANHO;k++){
    fflush(stdin);
    printf("Informe un caractere:\n");
    scanf("%c",&vet[k]);
    }
    
     for(k=0;k<TAMANHO/2;k++){
        if(vet[k] == vet[p]){
           cont++;
        }
        p--;
    }    
    
    if(cont == TAMANHO/2){
        printf("O vetor eh um palindromo! \n");
    }
    else {
        printf("O vetor nao eh um palindromo! \n");
    }

    getch();
}
