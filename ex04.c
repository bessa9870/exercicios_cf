#include <stdio.h>
#include<stdlib.h>
int main(){
//declara��o de vari�vel :D
float nt1, nt2, nt3, Media;//tipo e nome
//Comandos de entrada
printf("Primeira nota");
scanf("%f", &nt1);
printf("Segunda nota");
scanf("%f", &nt2);
printf("Terceira nota");
scanf("%f", &nt3);
//Aqui � o processamento
Media = (nt1 + nt2 + nt3)/3;
//E agora vem os comandos de sa�da
printf("A media: %f",Media);
return 0;
}

