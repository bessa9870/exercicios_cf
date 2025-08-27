#include <stdio.h>
int main(){
//Esse aqui é mais difícil. Declarando variável agpra
float salario_min, valor_kilowatt, kilowatt_gasto, resultado;
printf("Digite aqui a quantidade de kilowatts gasta: \n");
scanf("%f", &kilowatt_gasto);
//Vamos comear os procedimentos
salario_min = 1518;
valor_kilowatt = salario_min/5;
kilowatt_gasto = valor_kilowatt * kilowatt_gasto;
printf("O valor de 1 kilowatt em reais seria R$%.2f\n", valor_kilowatt);
printf("O valor de cada kilowatt gasto seria: R$%.2f\n", kilowatt_gasto);
//Esse comentário é pra eu tentar entender o raciocinio que tive, pois nem eu sei como cheguei nisso.
//No início criei uma variável chamada kilowatt, uuma chamada salario_min e a resultado, daí eu estruturei o codigo
//No primeiro printf eu guardei a quantidade de kw usados pelo usuário na variável kilowatt
//No calculo eu atribui o valor 1518 na variável salario_min e fiz o calculo kilowatt = salario/5
//Nos comandos de saída, usei os mesmos printf's ali de cima, mas eu repeti a variável. E na compilação o valor estava errado.
//Pensei por horas, cheguei na conclusão que talvez o erro fosse eu e tentei me matar, mas quando estava atando a corda para me enforcar, pensei: "E se eu criar outra variavel?"
//Dividi a kilowatt em duas, valor_kilowatt, guardaria o valor de um kw 1/5 de um salario minimo
//E a kilowatt_gasto que guardaria a quantidade de kw gastos pelo usuario.
//Compilei e testei com outros numeros e deu certo. Fiquei muito feliz e ate bati o dedo na quina da porta quando comemorava, mas dane-se. Eu consegui!
resultado = kilowatt_gasto - (kilowatt_gasto * 0.15);
//Não sei se é a forma mais profissional de resolver, mas usei a variavel resultado para guardar:
// O valor que o usuario pagaria - os 15% do desconto
printf("Com o desconto de 15%% o novo valor seria: R$%.2f", resultado);
return 0;
}
