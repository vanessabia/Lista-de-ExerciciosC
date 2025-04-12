#include <stdio.h>
#include <conio.h>
int main() {
    int i,k,num,p,cont=0;

    
    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    
    for(k=1;k<num;k++) {
        
        for(i=1;i<=k;i++){
           printf ("*");
        }
        printf("\n");
    } 
        

}