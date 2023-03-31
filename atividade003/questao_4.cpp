#include <stdio.h>

/*4. Elabore um programa para verifica��o de situa��o eleitoral, onde ser� informada somente a idade do eleitor, considere as situa��es abaixo:

Menor que 0 n�o nasceu
0-15 n�o vota
16-17 opcional
18-65 obrigat�rio
exatamente 41- somente ganha pr�mio e n�o vota!!!
> 65 opcional
exatamente 88 - somente ganha pr�mio e n�o vota!!!*/


int main(){
	
	int idade,b,a;
	
	
	printf("- SITUA�AO ELEITORAL\n\n");
	
	printf("insira a sua idade:");
	scanf("%d",&idade);
	
	a=idade;
	
	b = (a == 41) ? printf("somente ganha premio e nao vota") : b = (a == 88) ? printf("somente ganha premio e nao vota") : b = (a == 65) ? printf("opcional") : b = (a < 0) ? printf("nao nasceu") : b = (a == 16) ? printf("opcional") : b = (a == 17) ? printf("opcional") : b = (a <= 15) ? printf("nao vota") : printf("obrigatorio");
	
	printf("%d",b); 
	
	
}
