#include <stdio.h>
#include <locale.h>

//Escreva um algoritmo para ler o sal�rio mensal atual de um funcion�rio e o percentual de reajuste. Calcular e escrever o valor do novo sal�rio.

int main()
{
	float mensal, reajuste, novo;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Sal�rio atual: R$ ");
	scanf("%f",&mensal);
	
	printf("O valor percentual do reajuste: ");
	scanf("%f",&reajuste);
	
	
	novo = mensal + (mensal*reajuste/100);
	
	printf("O novo sal�rio ap�s o reajuste � de R$ %.2f ",novo);
	
	return 0;
	
}
