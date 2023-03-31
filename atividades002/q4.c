#include <stdio.h>
#include <stdlib.h>

//Fa�a um programa que leia o sal�rio de um trabalhador e o valor da presta��o de um empr�stimo. 
//Se a presta��o, for maior que 20% do sal�rio, imprima: �Empr�stimo n�o concedido.�, caso contr�rio, imprima: �Empr�stimo concedido.�

int main(int argc, char *argv[]) {
	
	float salario,emprestimo;
	
	printf("Digite seu salario: ");
	scanf("%f",&salario);
	
	printf("Digite o valor que deseja de emprestimo: ");
	scanf("%f",&emprestimo);
	
	if(emprestimo >=(1.2 * salario ))
	{
		printf("emprestimo nao concedido");
	}
	else 
	{
		printf("emprestimo concedido");
	}
	
	return 0;
}