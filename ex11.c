#include <stdio.h>
#include <math.h>
int main(){
//Declarando variáveis
float diagonal, area;
//Comandos de entrada
printf("Digite a diagonal do quadrado aqui: \n");
scanf("%f", &diagonal);
//O cálculo
area = (diagonal * diagonal) / 2;
//Saída
printf("A area de um quadrado calculada pela diagonal seria: %f", area);
return 0;
}
