#include <stdio.h>
int main(){
//Esse aqui � mais dif�cil. Declarando vari�vel agpra
float salario_min, valor_kilowatt, kilowatt_gasto, resultado;
printf("Digite aqui a quantidade de kilowatts gasta: \n");
scanf("%f", &kilowatt_gasto);
//Vamos comear os procedimentos
salario_min = 1518;
valor_kilowatt = salario_min/5;
kilowatt_gasto = valor_kilowatt * kilowatt_gasto;
printf("O valor de 1 kilowatt em reais seria R$%.2f\n", valor_kilowatt);
printf("O valor de cada kilowatt gasto seria: R$%.2f\n", kilowatt_gasto);
//Esse coment�rio � pra eu tentar entender o raciocinio que tive, pois nem eu sei como cheguei nisso.
//No in�cio criei uma vari�vel chamada kilowatt, uuma chamada salario_min e a resultado, da� eu estruturei o codigo
//No primeiro printf eu guardei a quantidade de kw usados pelo usu�rio na vari�vel kilowatt
//No calculo eu atribui o valor 1518 na vari�vel salario_min e fiz o calculo kilowatt = salario/5
//Nos comandos de sa�da, usei os mesmos printf's ali de cima, mas eu repeti a vari�vel. E na compila��o o valor estava errado.
//Pensei por horas, cheguei na conclus�o que talvez o erro fosse eu e tentei me matar, mas quando estava atando a corda para me enforcar, pensei: "E se eu criar outra variavel?"
//Dividi a kilowatt em duas, valor_kilowatt, guardaria o valor de um kw 1/5 de um salario minimo
//E a kilowatt_gasto que guardaria a quantidade de kw gastos pelo usuario.
//Compilei e testei com outros numeros e deu certo. Fiquei muito feliz e ate bati o dedo na quina da porta quando comemorava, mas dane-se. Eu consegui!
resultado = kilowatt_gasto - (kilowatt_gasto * 0.15);
//N�o sei se � a forma mais profissional de resolver, mas usei a variavel resultado para guardar:
// O valor que o usuario pagaria - os 15% do desconto
printf("Com o desconto de 15%% o novo valor seria: R$%.2f", resultado);
return 0;
}
