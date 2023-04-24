#include <stdio.h>

// Prototipação
float soma(float n1, float n2);
float sub(float n1, float n2);
float div(float n1, float n2);
float mult(float n1, float n2);
float le_valida_n1(float n1);
float le_valida_n2(float n2);
char le_valida_operador(char op);
char deseja_continuar();

int main() {
    float total = 0;
    char op;
    float n1, n2;
    char continuar;

    printf("+-----------------------------------+\n");
    printf("|          SUPER CALCULATOR         |\n");
    printf("+-----------------------------------+\n");
    printf("|           Copyright 2023          |\n");
    printf("+-----------------------------------+\n");

    do {
        n1 = le_valida_n1(n1);
        n2 = le_valida_n2(n2);
        op = le_valida_operador(op);

        switch (op) {
            case '+':
                total = soma(n1, n2);
                break;

            case '-':
                total = sub(n1, n2);
                break;

            case '/':
                total = div(n1, n2);
                break;

            case '*':
                total = mult(n1, n2);
                break;

            default:
                printf("Operacao invalida\n");
                return 1;
        }

        printf("+-----------------------------------+\n");
        printf("|O resultado da operacao eh %.2f|\n", total);
        printf("+-----------------------------------+\n");
        continuar = deseja_continuar();
    } while (continuar == 's' || continuar == 'S');

    return 0;
}

// Declarações
float soma(float n1, float n2) {
    return n1 + n2;
}

float sub(float n1, float n2) {
    return n1 - n2;
}

float mult(float n1, float n2) {
    return n1 * n2;
}

float div(float n1, float n2) {
    return n1 / n2;
}

float le_valida_n1(float n1) {
    printf("+-----------------------------------+\n");
    printf("| Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("+-----------------------------------+\n");
    return n1;
}

float le_valida_n2(float n2) {
    printf("+-----------------------------------+\n");
    printf("| Digite o segundo numero: ");
    scanf("%f", &n2);
    printf("+-----------------------------------+\n");
    return n2;
}

char le_valida_operador(char op) {
    do {
        printf("+-----------------------------------+\n");
        printf("| Escolha uma operação:             |\n");
        printf("| 1. Soma(+)                        |\n");
        printf("| 2. Subtracao(-)                   |\n");
        printf("| 3. Divisão(/)                     |\n");
        printf("| 4. Multiplicacao(*)               |\n");
        printf("+-----------------------------------+\n");
        scanf(" %c", &op);
        printf("+-----------------------------------+\n");
    } while (op != '+' && op != '-' && op != '/' && op != '*');
    return op;
}

char deseja_continuar() {
    char continuar;
    do {
        printf("\nDeseja continuar? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar != 's' && continuar != 'n');
    return continuar;
}
