#include <stdio.h>
#include <locale.h>

//Fa�a um algoritmo que leia tr�s notas de um aluno, calcule e escreva a m�dia final deste aluno.
// Considerar que a m�dia � ponderada e que o peso das notas � 2, 3 e 5. F�rmula para o c�lculo da m�dia final �:((n1*2)+(n2*3)+(n3*5))/2+3+5

int main()
{
	float um,dois,tres,media;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Insira respectivamente �s 3 notas: ");
	scanf("%f %f %f",&um,&dois,&tres);
	
	media = ((um*2)+(dois*3)+(tres*5))/10;
	printf("m�dia final � %.2f",media);
}
