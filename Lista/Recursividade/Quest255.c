#include <stdio.h>
#include <conio.h>

int progressao(int termo, int razao, int n){
   if (n == 1){
      return termo;
   }
   return razao +  progressao(termo,razao,n-1);
}

void main(){
    int termo,razao,n;

    printf("Informe o termo e a razao da PA:"); // 3 8 13 18 23 2 
    scanf("%d%d",&termo,&razao);
    printf("Informe um numero:");
    scanf("%d",&n);
    int soma = progressao(termo,razao,n);
    printf("O numero da posicao %d na PA eh: %d",n,soma);

    getch();
}