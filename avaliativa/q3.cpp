#include <stdio.h>

int main(){
	
	/*3. Faca um programa que calcule e mostre a area da superficie e o volume de uma esfera
    sendo fornecido o valor de seu raio (R). A formula para calcular o volume eh: (4/3) * pi * R^3. A
    formula para calcular a area eh: 4 * pi * R^2. Considere (atribua) para pi o valor 3.14159. Use o
    conceito de constante Dica: Ao utilizar a formula, procure usar (4/3.0) ou (4.0/3), pois algumas
    linguagens (dentre elas o C++), assumem que o resultado da divisao entre dois inteiros eh
    outro inteiro*/
    
    float volume=0,raio=0,area=0,pi=3.14159;
    
    printf("Insira o valor a ser usado para Raio:");
    scanf("%f",&raio);
    
    volume = (4.0/3)* pi * (raio*raio*raio);
	area = 4.0 *pi*(raio*raio);
	
	printf("volume eh: %f = (4/3) * %f * %.0f^3\n",volume,pi,raio); 
	printf("Area da superficie eh: %f = 4 * %f * %.0f^2",area,pi,raio);
}
