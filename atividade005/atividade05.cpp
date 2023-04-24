#include <stdio.h>

//prototipa��o
float le_valida_media(float notas, int indice);
float calcular_media(float quantidade, float soma);


int main(){
    int i,quantidade,reprovado = 0,aprovado = 0;
    float notas,menor,maior,media,soma = 0;

    printf("\n--------------------\nRelatorio da turma\n--------------------\n\n");

    printf("Insira quantas medias serao feitas (maximo 25): ");
    scanf("%d", &quantidade);

    if(quantidade > 25){
        printf("A quantidade maxima eh 25.O programa ira considerar apenas as primeiras 25 medias.\n");
        quantidade = 25;
    }

    printf("\n--------------------\n");

    for(i = 0; i < quantidade; i++){

        notas = le_valida_media(notas, i);
        
        if(i == 0){
            menor = notas; maior = notas; 
        }
		else if(notas < menor)
		{
            menor = notas; 
        }
		else if(notas > maior)
		{
            maior = notas;     
        }
        if(notas > 6.9){
            aprovado++;
        }
		else
		{
            reprovado++;
        }
        soma = notas + soma;
    }

    media = calcular_media(quantidade, soma);

    printf("--------------------\nMedia da turma: %.1f \n", media);
    printf("Maior nota: %.1f \n", maior);
    printf("Menor nota: %.1f \n", menor);
    printf("Reprovados: %d \n", reprovado);
    printf("Aprovados: %d\n--------------------\n", aprovado);
    printf("   BSB - 2023");
}

float le_valida_media(float notas, int contador){
    int i = 0;
    while(i == 0){
        printf("Informe a %da nota: ", contador+1);
        scanf("%f", &notas);
        if(notas >= 0 && notas <= 10){
            i++;
        }
    }
    return notas;
}

float calcular_media(float quantidade, float soma){
    float media;
    return media = soma/quantidade;
}
