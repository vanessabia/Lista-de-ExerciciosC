#include <stdio.h>
#include <conio.h>

void main(){
     int num, k, pt=0, ptb=0, pmdb=0, dem=0, psdb=0, pcdob=0;
     
     for(k=1;k<=20;k++){
     
     printf("\nInforme o numero do deputado:");
     scanf("%d",&num);
     
     if(num >= 10000 && num <= 99999){
      int partido = num/1000;
     
     
     switch(partido){
     
     case 13 : pt++;break;
     case 14 : ptb++;break;
     case 15 : pmdb++;break;
     case 25 : dem++;break;
     case 45 : psdb++;break;
     case 65 : pcdob++;break;
     default : printf("Partido inexistente!");
     
     } 
     }
     else{
     printf("Partido inexistente!");
     }
     }
     printf("Quantidade de deputados que cada partido elegeu:\n pt:%d\n ptb:%d\n pmdb:%d\n dem:%d\n psdb:%d\n pcdob:%d\n",pt,ptb,pmdb,dem,psdb,pcdob);
     
     getch();
 }