#include <stdio.h>

int main(){
	
	/*8. Elabore um programa que fa�a a leitura de v�rios n�meros inteiros at� que se digite
    um n�mero negativo. O programa tem de retornar o maior e o menor n�mero lido*/
    
    int num,maior=-9999999, menor=999 ;
    
    do{
		printf("Insira um numero:");
	    scanf("%d",&num);
	    
	    if(num>maior){
	    	maior = num;
		}
		if(num<menor){
			menor = num;
		}
	}while(num > 0);
	
	printf("maior = %d; menor = %d",maior,menor);
}
