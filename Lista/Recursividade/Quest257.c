#include <stdio.h>
#include <conio.h>

int Potencia(int base, int expo){
    if(expo==0){
        return 1;
    }
    else{
        return base * Potencia(base, expo-1);
    }
}

void main(){
    int base, expo;

    printf("Informe a base e o expoente:");
    scanf("%d%d",&base,&expo);
    int resul = Potencia(base,expo);
    printf("O resultado da potenciacao eh: %d",resul);
    getch();
}