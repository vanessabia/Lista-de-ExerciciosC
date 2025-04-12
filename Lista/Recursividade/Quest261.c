#include <stdio.h>
#include <conio.h>

int somaAlgarismos(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + somaAlgarismos(n / 10);
}

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    int soma = somaAlgarismos(numero);
    
    printf("A soma dos algarismos é: %d\n", soma);
    
    getch();

}