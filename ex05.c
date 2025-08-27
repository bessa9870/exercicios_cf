#include <stdio.h>
//Aqui já começou a ficar dificil mano teleze. Mas, bora lá
int main(){
//Declarando variáveis
float nt1, nt2, peso1, peso2, media_p;
//Comandos de entrada
printf("Coloque a primeira nota: ");
scanf("%f", &nt1);
printf("Atribua o peso da nota: ");
scanf("%f", &peso1);
printf("Coloque a segunda nota: ");
scanf("%f", &nt2);
printf("Atribua o peso da nota: ");
scanf("%f", &peso2);
//Aqui é o calculo. Eu fiquei meia hora nessa desgraça achando que estava errado, e no fim o erro era que eu tinha esquecido o %f na linha 17...
media_p= (nt1 * peso1 + nt2 * peso2) / (peso1 + peso2);
printf("A media ponderada seria: %f",media_p);
return 0;
}
