#include <stdio.h>
#include <locale.h>

//3. Faça um programa que calcule a quantidade necessária de latas de tinta para pintar uma parede. O programa pergunta as medidas de largura e altura da parede em metros e 
//escreve quantas latas de tinta serão necessárias para pintá-la. Considere que o consumo de tinta é de 300 ml por metro quadrado e a quantidade de tinta por lata é de 2 litros.

int main()
{
	float largura,altura,area;
	int lata;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Qual a largura e altura da parede em metros?\nlargura:");
	scanf("%f",&largura);
	
	printf("altura:",largura);
	scanf("%f",&altura);
	
	area = largura * altura;
	area = area * 300;
	area = area / 1000;
	
	if (area < 2)
	{
		printf("menos de 1 lata foi usada");
	}

	if (area > 2)
	{
		do
		{
			area = area - 2;
		    lata++;
		}while (area >= 2);
		printf("Serão usadas %i latas de tinta",lata);
	} 

	return 0;
}
