#include <stdio.h>
#include <locale.h>

//Faça um algoritmo que leia três notas de um aluno, calcule e escreva a média final deste aluno.
// Considerar que a média é ponderada e que o peso das notas é 2, 3 e 5. Fórmula para o cálculo da média final é:((n1*2)+(n2*3)+(n3*5))/2+3+5

int main()
{
	float um,dois,tres,media;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Insira respectivamente ás 3 notas: ");
	scanf("%f %f %f",&um,&dois,&tres);
	
	media = ((um*2)+(dois*3)+(tres*5))/10;
	printf("média final é %.2f",media);
}
