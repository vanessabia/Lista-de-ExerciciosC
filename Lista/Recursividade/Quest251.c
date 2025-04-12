#include <stdio.h>
#include <conio.h>

int fatorial (int n){
    if (n == 0 || n == 1){
        return 1;
    }
    return n * fatorial(n-1);
}

void main(){
    int n;
    printf("informe um numero inteiro nao negativo:");
    scanf("%d",&n);
    int valorFatorial = fatorial(n);
    printf("O fatorial de %d eh: %d",n,valorFatorial);
    getch();
}