#include <stdio.h>

//Fa�a um programa que leia dois n�meros e mostre o maior deles. Se, por acaso, os dois n�meros forem iguais, imprima a mensagem     �N�meros iguais�.

int main() {
    float nu1,nu2;
    printf("insira 2 numeros");
    scanf("%f %f",&nu1 ,&nu2);
    
    if(nu1 > nu2)
    { printf("o maior valor eh %.1f",nu1);
    }
    if (nu1 == nu2)
    {
        printf("os valores sao iguais");
    }
    else {
        printf("o maior valor eh %.1f",nu2);
    }
    return 0;
}