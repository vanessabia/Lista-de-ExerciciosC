#include <stdio.h>
#include <conio.h>
int main() {
    int i,k,num,p,cont=0;

    
    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    
    for(k=num;k>0;k--) {
        
        for(i=1;i<=k;i++){
           printf ("*");
        }
        printf("\n");
    } 
        

}