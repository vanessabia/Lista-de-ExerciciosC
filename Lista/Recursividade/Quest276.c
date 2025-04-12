#include <stdio.h>

void imprimirAsteriscos(int n, int i) {
    // Caso base: se n for 0, não imprime nada
    if(n==0){
        return 0;
    }

    // Imprime a linha atual de asteriscos
    if (i < n) {
        printf("*");
        imprimirAsteriscos(n, i + 1); // Chamada recursiva para imprimir o próximo asterisco
    } else {
        printf("\n"); // Nova linha após imprimir todos os asteriscos
        imprimirAsteriscos(n - 1, 0); // Chamada recursiva para a próxima linha
    }
}

int main() {
    int N;

    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", &N);
    
    // Chama a função para imprimir o padrão
    imprimirAsteriscos(N, 0);

    return 0;
}