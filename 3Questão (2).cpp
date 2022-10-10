#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil ");
    float av1, av2, soma, media;
    printf("Calculadora\n\n");

    printf("Coloque um numero:");
    scanf("%f",&av1);

    printf("Coloque um numero:");
    scanf("%f",&av2);



    soma=(av1+av2);
    media=soma/2;

     printf("O valor calculado entre a média %.2f e %.2f FOI DE %.2f",av1, av2, media);

    printf("\n Resultado %.2f" , media);

    return 0;
}