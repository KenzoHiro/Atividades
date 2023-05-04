#include <stdio.h>

int main(){
	
	/*1. Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferen�a do produto de A e B pelo produto de C e D segundo a f�rmula: 
	DIFERENCA = (A * B - C * D). Apresente o resultado da seguinte forma:
	
    DIFERENCA = (valor de A * valor de B - valor de C * valor de D)
    DIFERENCA = (valor de DIFERENCA)*/

    int A=0,B=0,C=0,D=0;
    float diferenca=0;
    
    printf("-----------------------\nInsira os A B C D\n-----------------------\n");
    printf("A:");
    scanf("%d",&A);
    
    printf("B:");
    scanf("%d",&B);
    
    printf("C:");
    scanf("%d",&C);
    
    printf("D:");
    scanf("%d",&D);

    diferenca = A*B-C*D;
    printf("(valor de A %d *  Valor de B %d -  valor de C %d * Valor de D %d)",diferenca,A,B,C,D);
    printf("\nValor de diferenca %f",diferenca);
    
    return 0;  
}
