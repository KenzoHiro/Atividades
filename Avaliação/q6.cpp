#include <stdio.h>

int main(){
	
	/*6. Faça um programa que exiba a soma de todos os números naturais abaixo de 1.000
    que são múltiplos de 3 ou 5.*/
    
	int i,soma=0;
	
	for(i=1;i<1000;i++){
		if(i % 3 == 0 || i % 5 ==0){
			soma+=i;
		}	
	}
	
	printf("%d",soma);
	
	return 0;
}
