#include <stdio.h>

//1. Programa que calcule a média de 5 notas de um aluno.

int main(){

    float media,n1,n2,n3,n4,n5;

    printf("_Media de notas_\n\n");
    printf("Escreva da 1 a 5 nota:\n");
    scanf("%f %f %f %f %f",&n1,&n2,&n3,&n4,&n5);

    media=n1+n2+n3+n4+n5/5;

    printf("A media final eh: %2.f",media);
}