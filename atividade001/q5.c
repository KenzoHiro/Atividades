#include <stdio.h>
#include <locale.h>

//Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e mês com 30 dias.

int main()
{
	int dias,anos,meses;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Idade em anos: ");
	scanf("%d",&anos);
	
	printf("Idade em meses: ");
	scanf("%d",&meses);
	
	printf("Idade em dias: ");
	scanf("%d",&dias);
	
	dias= (anos*365)+(meses*30)+dias;
	
	printf("Idade apenas em dias é %d dias",dias);

}
