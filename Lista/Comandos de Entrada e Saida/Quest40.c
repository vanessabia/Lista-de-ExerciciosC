#include <stdio.h>
#include <conio.h>

void main(){
     int conta, conta_final;
     
     printf("Informe o valor da conta: ");
     scanf("%d",& conta);
     
     conta_final= conta + (conta * 0.1) +10;
     printf("O valor final da conta eh: %d\n",conta_final);
     
     getch();
 }