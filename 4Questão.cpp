#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil ");
    float valor1, valor2, valor3, valor4, produto;
    printf("Calculadora\n\n");

    printf("Coloque um numero:");
    scanf("%f",&valor1);

    printf("Coloque um numero:");
    scanf("%f",&valor2);

    printf("Coloque un numero:");
    scanf("%f",&valor3);

    printf("Coloque un numero:");
    scanf("%f",&valor4);

    soma=(valor1*valor2*valor3*valor4);

    printf("\n Resultado %.2f", produto);

    return 0;
}