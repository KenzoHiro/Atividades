#include <stdio.h>

// 1. Fa�a um programa em que o usu�rio digite o custo de uma determinada mercadoria, em seguida, adiciona-se ao custo o valor do
//frete e despesas eventuais (tamb�m solicitadas pelo teclado). Para concluir, o programa pergunta qual o valor de venda e indica a percentagem de lucro da mercadoria

int main()
{
	float custo, despesas, venda, lucro;
	printf("---VAREJO---\n\nMercadoria x: R$ ");
	scanf("%f",&custo);
	
	printf("Valor de frete e despesas adicionais: R$ ");
	scanf("%f",&despesas);
	
	printf("Qual o valor de venda?\n");
	scanf("%f",&venda);
	
	lucro = venda - (custo + despesas);
	lucro = lucro /venda;
	lucro = lucro * 100;
	
	printf("A porcentagem de lucro do produto: %.2f%%",lucro);
	return 0;
}
