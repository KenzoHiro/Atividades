#include <stdio.h>
#include <locale.h>
//Escreva um algoritmo para ler as dimens�es de um ret�ngulo (base e altura), calcular e escrever a �rea do ret�ngulo.

int main()
{
	float base,altura,area;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("_Leitor de dimens�es de um ret�ngulo_\n\nbase: ");
	scanf("%f",&base);
	
	printf("\naltura: ");
	scanf("%f",&altura);
	
	area = base * altura;
	printf("\n�rea = %.1f",area);
	
	return 0;
}
