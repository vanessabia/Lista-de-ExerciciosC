#include <stdio.h>
#include <conio.h>

int produto (int x, int y){
  if(x == 0 || y == 0){
    return 0;
  }
  if(x == 1){
    return y;
  }
  if(y == 1){
    return x;
  }
  return x + produto(x,y-1);

}

void main(){
    int x,y;
    printf("Informe dois numeros:");
    scanf("%d %d",&x,&y);
    int final = produto(x,y);
    printf("O valor eh:%d",final);
    getch();
}