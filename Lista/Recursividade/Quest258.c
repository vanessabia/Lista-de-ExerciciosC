#include <stdio.h>
#include <conio.h>

void Binario(int num){
    if(num==0){
        printf("0");
    }
    if(num==1){
        printf("1");
    }
    else{
        Binario(num/2);
        printf("%d",num%2);
    }
}

void main(){
    int num;

    printf("Informe um numero decimal:");
    scanf("%d",&num);
    printf("Seu correspondente em binario eh:\n");
    Binario(num);
    getch();
}