#include <stdio.h>
#include <conio.h>

int somaIntervalo (int min, int max){
    if (min == max){
        return min;
    }

    return min + somaIntervalo(min+1, max);
}

void main(){
    int n, m;
    printf("Informe dois numeros:");
    scanf("%d%d",&m,&n);
    int soma = somaIntervalo(m,n);
    printf("A soma do intervalo eh: %d",soma);
    getch();
}