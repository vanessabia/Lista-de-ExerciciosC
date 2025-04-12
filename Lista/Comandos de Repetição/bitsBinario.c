#include <stdio.h>
#include <conio.h>
int main() {
    int numero;
    int bits = 0;

    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", &numero);

    if (numero == 0) {
        bits = 1;
    } 
    else {
        // Cálculo do número de bits
        while (numero > 0) {
            numero /= 2;
            bits++;
        }
    }

    printf("A quantidade minima de bits necessaria para representar o numero em binario e: %d\n", bits);

    getch();
}