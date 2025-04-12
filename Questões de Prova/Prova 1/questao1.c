#include <stdio.h>
#include <conio.h>
void main(){

    int ced50=0, ced20=0, ced10=0, saque, resto;

    printf("Informe o valor do saque:");
    scanf("%d",&saque);
    
    if(saque >= 50){
        ced50 = saque/50;
        printf("R$ 50,00 = %d \n",ced50);
    }
     if(saque >= 20){
        resto = saque%50;
        ced20 = resto/20;
        printf("R$ 20,00 = %d \n",ced20);
    }
     if(saque >= 10){
        resto = saque%20;
        ced50 = saque/10;
        printf("R$ 10,00 = %d \n",ced10);
    }
    

     getch();
    }