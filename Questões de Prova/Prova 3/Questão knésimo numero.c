#include <stdio.h>
#include <conio.h>

int identificar(int n, int pos){
    if(pos==1){
        return n%10;
    }
    return identificar(n/10,pos-1);
}

void main(){
    int k,n;
    printf("Digite um numero:");
    scanf("%d",&n);
    printf("Informe a posicao do numero:");
    scanf("%d",&k);
    int posicao = identificar(n,k);
    printf("O %d-esimo numero de %d eh %d",k,n,posicao);
    getch();
}