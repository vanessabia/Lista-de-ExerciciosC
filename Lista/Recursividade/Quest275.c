#include <stdio.h>

void imprimirAsteriscos(int , int linha) {
    // Caso base: se n for 0, não imprime nada
    if (n == 0) {
        return;
    }

    // Imprime a linha atual de asteriscos
    if (linha < n) {
        printf("*");
        imprimirAsteriscos(n, linha + 1); // Chamada recursiva para imprimir o próximo asterisco
    }

    // Nova linha após imprimir todos os asteriscos da linha atual
    if (linha == n - 1) {
        printf("\n");
        imprimirAsteriscos(n - 1, 0); // Chamada recursiva para a próxima linha
    }
}

int main() {
    int N;

    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &N);
    
    // Chama a função para imprimir o padrão
    imprimirAsteriscos(N, 0);

    return 0;
}