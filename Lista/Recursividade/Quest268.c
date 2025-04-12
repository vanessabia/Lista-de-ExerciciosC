#include <stdio.h>
#include <conio.h>
const int TAMANHO=10;

int verificar(int vet[], int tamanho, int n){
    if(n==tamanho){
        return 0;
    }
    if(vet[n]%2==0){
        return 1 +verificar(vet,tamanho,n+1);
    }
    return verificar(vet,tamanho,n+1);
}

void main(){
    int vet[TAMANHO],n,k;
    for(k=0;k<TAMANHO;k++){
        printf("Informe um numero:");
        scanf("%d",&vet[k]);
    }
    printf("\nInforme a posicao:");
    scanf("%d",&n);
    int pares = verificar(vet,TAMANHO,n-1);
    printf("Existem %d numeros pares!",pares);
    getch();
}