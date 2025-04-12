#include <stdio.h>
#include <conio.h>

void main(){
     int saque, soma = 0;
     
     do{
     
     printf("\nInforme o valor do saque ou digite 0 para finalizar:\n");
     scanf("%d",&saque);
     
     if(saque%10 != 0){
     printf("Impossivel efetuar o saque!\n");
     }
     
     int ced100= saque/100;
     int resto = saque%100;
     int ced50 = resto/50;
     int resto1 = resto%50;
     int ced10 = resto1/10;
     
     if(ced100 > 0){
      printf(" %d ced de 100\n",ced100);
     }
     
     if(ced50 > 0){
      printf(" %d ced de 50\n",ced50);
     }
     
     if(ced10 > 0){
      printf(" %d ced de 10\n",ced10);
     }
     
     soma = soma+saque;
     
     } while(saque != 0);
     
     printf("A soma de todos os saques eh: %d \n",soma);
     
     getch();
 }