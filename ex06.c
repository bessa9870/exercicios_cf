#include <stdio.h>
int main(){
//Declarando vari�vel
int ni, Resultado;
//Sinceramente nem sei o que colocar aqui
printf("Digite o numero: ");
scanf("%i", &ni);
//Primeiro c�lculo
Resultado = ni * 1;
//E aqui � a primeira sa�da
printf("%i x 1= %i\n", ni, Resultado);
//Segundo e vai at� 10. Eu n�o vou copiar isso at� 10 n�o kkkkk
Resultado = ni * 2;
printf("%i x 2= %i\n", ni, Resultado);

Resultado = ni * 3;
printf("%i x 3= %i\n", ni, Resultado);

Resultado = ni * 4;
printf("%i x 4= %i\n", ni, Resultado);

Resultado = ni * 5;
printf("%i x 5= %i\n", ni, Resultado);

Resultado = ni * 6;
printf("%i x 6= %i\n", ni, Resultado);

Resultado = ni * 7;
printf("%i x 7= %i\n", ni, Resultado);

Resultado = ni * 8;
printf("%i x 8= %i\n", ni, Resultado);

Resultado = ni * 9;
printf("%i x 9= %i\n", ni, Resultado);
//Aqui � o �ltimo c�lculo e eu terminei
Resultado = ni * 10;
//Sa�da
printf("%i x 10= %i", ni, Resultado);

return 0;
}
