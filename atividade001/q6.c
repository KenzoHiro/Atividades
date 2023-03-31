#include <stdio.h>
#include <locale.h>

//Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste. Calcular e escrever o valor do novo salário.

int main()
{
	float mensal, reajuste, novo;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Salário atual: R$ ");
	scanf("%f",&mensal);
	
	printf("O valor percentual do reajuste: ");
	scanf("%f",&reajuste);
	
	
	novo = mensal + (mensal*reajuste/100);
	
	printf("O novo salário após o reajuste é de R$ %.2f ",novo);
	
	return 0;
	
}
