#include <stdio.h>

//2. Escreva um programa que pergunte qual o raio de um círculo e imprima a sua área. 

int main()
{
	float r, area;
	
	printf("Qual o raio do circulo?\n");
	scanf("%f",&r);
	
	area = (r * r) * 3.14;
	printf("A area e: %.2f", area);
	
}
