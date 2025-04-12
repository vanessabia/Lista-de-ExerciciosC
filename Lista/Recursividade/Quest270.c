#include <stdio.h>
#include <conio.h>
const int TAMANHO =10;

int SaoIguais(int vet1[], vet2[], int n){
    
   if(n==TAMANHO-1 && vet1[n]==vet2[n]){
      return 1;
   } 
   if(n == TAMANHO-1){
    return 0;
   }
   if(vet1[n] != vet2[n]){
    return 0;
   }
   if(vet1[n]==vet2[n]){
    return SaoIguais(vet1,vet2);
   }
}

void main() {
    int vet1[TAMANHO], vet2[TAMANHO], n;

    // Leitura do primeiro vetor
    printf("Digite 10 números inteiros para o primeiro vetor:\n");
    for (int i = 0; i < TAMANHO; i++) {
        scanf("%d", &vet1[i]);
    }

    // Leitura do segundo vetor
    printf("Digite 10 números inteiros para o segundo vetor:\n");
    for (int i = 0; i < TAMANHO; i++) {
        scanf("%d", &vet2[i]);
    }

    // Leitura da posição N
    printf("Digite a posição N (0 a 9) a partir da qual deseja comparar os vetores: ");
    scanf("%d", &n);

    // Verifica se N está dentro dos limites
    if (n < 0 || n >= TAMANHO) {
        printf("Posição N inválida. Deve estar entre 0 e 9.\n");
        return 1;
    }

    // Chama a função para verificar se os vetores são idênticos a partir da posição N
    int resul = SaoIguais(vet1, vet2, n);
    if (resul == 1) {
        printf("Os vetores são idênticos a partir da posição %d.\n", n);
    } else {
        printf("Os vetores não são idênticos a partir da posição %d.\n", n);
    }

    getch();
}