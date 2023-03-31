#include <stdio.h>
#include <locale.h>

//Uma revendedora de carros usados paga a seus funcion�rios vendedores um sal�rio fixo por m�s, mais uma comiss�o tamb�m fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas. 
//Escrever um algoritmo que leia o n�mero de carros por ele vendidos, o valor total de suas vendas, o sal�rio fixo e o valor que ele recebe por carro vendido. Calcule e escreva o sal�rio final do vendedor.

int main()
{
	int vendidos;
	float total,salario,comissao,final;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Quantos carros foram vendidos?\n");
	scanf("%d",&vendidos);
	
	printf("Qual o valor das vendas ao todo?\nR$ ");
	scanf("%f",&total);
	
	printf("Valor do sal�rio fixo: R$ ");
	scanf("%f",&salario);
	
	printf("Valor a ser recebido por carro vendido: R$ ");
	scanf("%f",&comissao);
	
	final = salario + (total*0.05) + (vendidos*comissao/100);
	
	printf("O sal�rio final � de R$ %.2f",final);
	
	return 0;
}	
