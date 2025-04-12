#include <stdio.h>
#include <conio.h>

int restDiv(int x, int y){
    if(x<y){
        return x;
    }
    else{
        return restDiv(x-y,y);
    }
}

void main(){
    int x,y;
    printf("Informe o divisor e o dividendo:");
    scanf("%d%d",&x,&y);
    int resto = restDiv(x,y);
    printf("O resto da divisão de %d por %d eh: %d",x,y,resto);
    getch();
}