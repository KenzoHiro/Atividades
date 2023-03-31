#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Fa�a um programa que leia um n�mero e, caso ele seja positivo, calcule e mostre: o n�mero digitado ao quadrado e raiz quadrada do n�mero digitado.

int main(int argc, char *argv[]) {
	
	float num,raiz,x;

	printf("Digite um numero: ");
	scanf("%f",&num);
	
	if(num<= 0)
	{
		printf("Insira um valor positivo.");
	}
	else
	{
	    x = num * num;
	    printf("\nO numero digitado ao quadrado e: %1.f",x);
	    
	    raiz = sqrt(num);
		printf("\n O raiz quadrada do numero eh: %1.f",raiz);
	}
	return 0;
}