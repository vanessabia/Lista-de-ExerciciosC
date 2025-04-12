#include <stdio.h>
#include <conio.h>

void main(){
     int seg, min=0, horas=0, segundos=0,resto;
     
     printf("Informe a hora em segundos: ");
     scanf("%d",&seg);
     
     if(seg >= 3600){
        horas = seg/3600;
     }
     resto = seg%3600;
     if(seg >= 60){
        min = resto/60;
     }
        segundos = resto % 60;
     
     printf("A hora informada eh: %d horas, %d minutos e %d segundos.\n",horas,min,segundos);
     
     getch();
 }