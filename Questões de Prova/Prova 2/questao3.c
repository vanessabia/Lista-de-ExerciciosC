#include <stdio.h>
#include <conio.h>

const int TAMANHO = 5;

void main(){
    
     int vet1[TAMANHO], vet2[TAMANHO], k,p, cont=0;

    printf("VETOR 1: \n");

    for(k=0;k<TAMANHO;k++){
    printf("Informe um numero:\n");
    scanf("%d",&vet1[k]);
    }

     printf("VETOR 2: \n");

    for(k=0;k<TAMANHO;k++){
    printf("Informe um numero:\n");
    scanf("%d",&vet2[k]);
    }

    for(p=0;p<TAMANHO;p++){
        for(k=0;k<TAMANHO;k++){
           if(vet1[p] == vet2[k]){
             cont++;
        }
        }
        if(cont == 0){
            printf("%d  ",vet1[p]);
        }
     }

     getch();
}
