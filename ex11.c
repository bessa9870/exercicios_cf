#include <stdio.h>
#include <math.h>
int main(){
//Declarando vari�veis
float diagonal, area;
//Comandos de entrada
printf("Digite a diagonal do quadrado aqui: \n");
scanf("%f", &diagonal);
//O c�lculo
area = (diagonal * diagonal) / 2;
//Sa�da
printf("A area de um quadrado calculada pela diagonal seria: %f", area);
return 0;
}
