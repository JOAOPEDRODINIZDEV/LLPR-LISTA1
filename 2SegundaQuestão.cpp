#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil ");
    float valor1, valor2, valor3, soma, media;
    printf("Calculadora\n\n");

    printf("Coloque um numero:");
    scanf("%f",&valor1);

    printf("Coloque um numero:");
    scanf("%f",&valor2);

    printf("Coloque un numero:");
    scanf("%f",&valor3);

   

    soma=valor1+valor2+valor3;
    media=soma/3;

     printf("O valor calculado entre a média Foi %f %f %f e %f",valor1, valor2, valor3, media);

    printf("\n Resultado %f" , media);

    return 0;
}
