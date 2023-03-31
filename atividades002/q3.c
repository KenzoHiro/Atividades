#include <stdio.h>
#include <stdlib.h>

//Fa�a um programa que leia um n�mero inteiro e verifique se esse n�mero � par ou �mpar.

int main(int argc, char *argv[]) 
{
	int n;
	
	printf("digite um numero: ");
	scanf("%d",&n);
	
	if( n % 2 == 0)
	{
		printf(" esse numero eh par");
	}
	
	else 
	{
		printf("Esse numero e impar");
	}
	
	return 0;
}