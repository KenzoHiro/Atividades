#include <stdio.h>

int main(){
	
	/*10. Fa�a um programa que leia 10 inteiros e imprima sua m�dia.*/
	
	int i=0,valores[10],soma=0;
	float media;
	
	do{
		printf("Insira o %d numero positivo:",i+1);
		scanf("%d",&valores[i]);
		soma += valores[i];
		i++;
	}while(i<10);
	
    media = soma / i;
    printf("A media dos valores e: %.2f", media);

   return 0;
	
}
