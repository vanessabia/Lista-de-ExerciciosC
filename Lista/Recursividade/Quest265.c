#include <stdio.h>
#include <conio.h>

int fibonacci(int n/*4*/){//1 1 2 3 5 8 13
    if(n == 1 || n == 2){
        return 1;
    }
    return fibonacci(n - 2) + fibonacci(n - 1);
}

void main(){
    int n;
    printf("Informe um numero: ");
    scanf("%d", &n);
    int resp = fibonacci(n);
    printf("%d", resp);


}