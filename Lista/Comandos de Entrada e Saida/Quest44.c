#include <stdio.h>
#include <conio.h>
int main() {
    int binario, decimal = 0, base = 1, resto;
    
    printf("Digite um numero binario: ");
    scanf("%d", &binario);
    
    while (binario > 0) {
        resto = binario % 10;  // Obtém o último dígito do número binário
        decimal += resto * base;  // Converte o dígito binário para decimal e soma ao resultado
        binario /= 10;  // Remove o último dígito do número binário
        base *= 2;  // Aumenta o fator de multiplicação (2^0, 2^1, 2^2,...)
    }
    
    printf("O valor decimal correspondente é: %d\n", decimal);
    
    getch();
}