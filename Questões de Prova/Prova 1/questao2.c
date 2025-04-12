#include <stdio.h>
#include <conio.h>
void main(){
    int fibonacci=1, soma=0,num, k;
    printf("Informe um numero inteiro:");
    scanf("%d",&num);

    for(k=0;k<=num;k++){
        fibonacci =fibonacci+soma;
        soma = fibonacci -soma;
    }
    if(fibonacci == num){
        printf("o numero %d pertence a serie!",fibonacci);
    }
    else{
        printf("o numero %d nao pertence a serie!",num);
    }
}