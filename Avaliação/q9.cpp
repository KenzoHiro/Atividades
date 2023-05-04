#include <stdio.h>

int main(){
	
	/*9. Elabore um algoritmo que permita ao usuário realizar a compra de frutas. Assim, apresente a lista de frutas disponíveis, abaixo, 
	com seus respectivos valores. O algoritmo deve permitir ao usuário retomar o menu frutas quantas vezes quiser, 
	e solicitar a quantidade de frutas. Ao final, apresente o valor total da compra.*/
	
	int frutas,i;
	float total=0;
	
	do{
		printf("1 => ABACAXI R$5,00 a unidade\n");
		printf("2 => MACA R$1,00 a unidade\n");
		printf("3 => PERA R$4,00 a unidade\n");
		printf("4 => Sair\n");
		printf("escolha o numero desejado.\n");
		scanf("%d",&frutas);
		
		switch(frutas){
			case 1:
				printf("Quantos abacaxis ?\n");
				scanf("%d",&i);
				total += i * 5.0;
				break;
			case 2:
				printf("Quantos macas ?\n");
				scanf("%d",&i);
				total += i * 1.0;
				break;
			case 3:
				printf("Quantos Peras ?\n");
				scanf("%d",&i);
				total += i * 4.0;
				break;
			case 4:
				printf("Sair");
				break;
			default:
				printf("tente novamente");
				
		}
	}while(frutas!=4);
	
	printf("O total da compra foi: R$%.2f",total);
}
