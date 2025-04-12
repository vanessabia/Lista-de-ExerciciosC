#include <stdio.h>
#include <conio.h>

int menorDivisor(int n1, int n2, int n3){
    int fator = 2;
    while (n1%fator!=0 && n2%fator!=0 && n3%fator!=0){
       fator = fator+1;
    }
    return fator;
}

int MMC(int n1, int n2, int n3){
    int div = menorDivisor(n1,n2,n3);
    if(n1 == 1 || n2 == 1 || n3 == 1){
        return div;
    }
    return div * MMC(n1%div,n2%div,n3%div);
}

void main(){
    int n1, n2, n3;
    printf("Informe 3 numeros:");
    scanf("%d%d%d",&n1,&n2,&n3);
    menorDivisor(n1,n2,n3);
    int resul = MMC(n1,n2,n3);
    printf("O mmc eh %d",resul);
    getch();
}