#include <stdio.h>

/*3. Faça um programa que entra com a idade de uma pessoa e se idade maior 
que 70 anos, aparece a mensagem "Novos 50". Se idade maior que 21 anos, Adulto. Se idade menor que 21 anos, Jovem. */

int main(){
    int idade;

    printf("Digite sua idade:");
    scanf("%d",&idade);

    if(idade > 70 )
    {
         printf("Novos 50");
    }
   
    else if(idade > 21) 
    {
        printf("Adulto");
    }
    else 
    {
        printf("jovem");   
    }
}