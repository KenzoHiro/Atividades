#include <stdio.h>

//Faça um programa que leia dois numeros e mostre qual deles � o maior.

int main() {
    float nu1,nu2;
    printf("insira 2 numeros");
    scanf("%f %f",&nu1 ,&nu2);
    
    if(nu1 > nu2)
    { printf("o maior valor eh %.1f",nu1);
    }
    else 
    {
        printf("o maior valor eh %.1f",nu2);
    }
    return 0;
}