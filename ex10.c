#include <stdio.h>
#include <math.h>
int main(){
//Declaração de- Ah, nós já sabemos
float base, altura, area;
//Comanados de entrada de dados
printf("Vamos calcular a area de um triangulo\n");
printf("Declare o valor da base aqui:\n");
scanf("%f", &base);
printf("Declare o valor da altura aqui:\n");
scanf("%f", &altura);
//Procesaamento de dados
area = altura * base / 2;
//Comandos de saída
printf("A area de um triangulo seria: %f\n\n", area);

//Agora vevm a area do quadrado. Começando declarando as varáveis, elas devem ter nomes diferentes.
float lado_q, area_q;
printf("Se liga que agora vamos calcular a area do mano quadrado.\n");
printf("Ponha aqui o lado: \n");
scanf("%f", &lado_q);
//Vamos fazer o processamento
area_q = lado_q * lado_q;
//Aqui a saída
printf("A area do quadrado seria: %f\n", area_q);

//Circulo...
float raio_c, area_c;
printf("Agora a area do circulo\n");
printf("Mete aqui o raio 'la ele': \n");
scanf("%f",&raio_c);
area_c = M_PI * pow(raio_c, 2);
printf("A area do circulo seria: %f\n", area_c);




return 0;
}
