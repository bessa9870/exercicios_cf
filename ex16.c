#include <stdio.h>

int main(){
int ano_nasc, idade, ano_atual;
float idade_se;
printf("Digite o ano que voce nasceu :");
scanf("%i",&ano_nasc);
printf("Digite o ano atual:");
scanf("%i", &ano_atual);
idade = ano_atual - ano_nasc;
printf("Sua idade seria:%i\n", idade);
idade_se = 365 / 7 * idade;
printf("Sua idade em semanas: %f", idade_se);
return 0;
}


