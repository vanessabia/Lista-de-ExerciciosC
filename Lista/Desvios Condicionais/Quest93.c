#include <stdio.h>
#include <conio.h>

void main(){
     int início = 1001, final = 8998, k;
     
     printf("Os palíndromos sao:");
     
     for(k=1001;k<=8998;k++){
     
     int mil= k/1000;
     int resto1= k%1000;
     int centena = resto1/100;
     int resto2 = resto1%100;
     int dezena = resto2/10;
     int unidade = resto2%10;
     int inverso = (unidade * 1000) + (dezena * 100) + (centena * 10) + mil;
     
     if(inverso == k){
      printf(" %d,",k);
     }
     }
     getch();
 }