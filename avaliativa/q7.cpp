#include <stdio.h>

int main(){
	
	/* 7. Escreva um programa que leia um n�mero inteiro, maior ou igual a zero, do usu�rio.
    Imprima o en�simo termo da sequ�ncia de Fibonacci. Essa sequ�ncia come�a no termo de
    ordem zero, e, a partir do segundo termo, seu valor � dado pela soma dos dois termos
    anteriores. Alguns termos dessa sequ�ncia s�o: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.*/
    
	int n,m,j,i,num;
	
	do{
		printf("Insira um numero positivo:");
	    scanf("%d",&num);
	}while(num < 0);

	for(i=0;i<num;i++){
		if(i<=1){
			j = i;
		}else{
			j=m+n;
			m=n;
			n=j;
		}
		printf("%d\n", j);
	}
	return 0;
}
