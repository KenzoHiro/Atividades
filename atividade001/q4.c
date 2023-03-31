#include <stdio.h>
#include <locale.h>
//Escreva um algoritmo para ler as dimensões de um retângulo (base e altura), calcular e escrever a área do retângulo.

int main()
{
	float base,altura,area;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("_Leitor de dimensões de um retângulo_\n\nbase: ");
	scanf("%f",&base);
	
	printf("\naltura: ");
	scanf("%f",&altura);
	
	area = base * altura;
	printf("\nárea = %.1f",area);
	
	return 0;
}
