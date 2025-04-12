#include <stdio.h>
#include <conio.h>

int Quantidade(int num){
    if(num<10){
        return 1;
    }
    return 1 + Quantidade(num/10);
}

void main(){
    int num;

    printf("Informe um numero: ");
    scanf("%d",&num);
    int resul= Quantidade(num);
    printf("%d",resul);
    getch();
}