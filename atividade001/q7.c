#include <stdio.h>
#include <locale.h>

//O custo de um carro novo ao consumidor � a soma do custo de f�brica com a porcentagem do distribuidor e dos impostos (aplicados ao custo de f�brica). 
//Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo para ler o custo de f�brica de um carro, calcular e escrever o custo final ao consumidor.

int main()
{
	float inicial, final;
	setlocale(LC_ALL, "Portuguese");
	
	printf("O custo de f�brica do carro: R$ ");
	scanf("%f",&inicial);
	
	final = inicial + (inicial*0.28) + (inicial * 0.45);
	printf("O custo final do consumidor � de R$ %.2f",final);
}
