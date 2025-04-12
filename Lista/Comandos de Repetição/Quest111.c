#include <stdio.h>
#include <conio.h>
int main() {
    int termo, razao, N;
    int n;

    printf("Digite o termo inicial da PA: ");
    scanf("%d", &termo);
    
    printf("Digite a razao da PA: ");
    scanf("%d", &razao);
    
    // Leitura do número N
    printf("Digite o numero N: ");
    scanf("%d", &N);

    // Verificação se N pertence à PA
    if (razao > 0 && (N - termo) % razao == 0) {
        n = (N - termo) / razao + 1;
        if (n > 0) {
            printf("O numero %d pertence à PA.\n", N);
        } else {
            printf("O numero %d nao pertence à PA.\n", N);
        }
    } else {
        printf("O numero %d nao pertence à PA.\n", N);
    }

    getch();
}