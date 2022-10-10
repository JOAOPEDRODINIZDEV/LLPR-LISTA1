#include <stdio.h>
#include <locale.h>

int main(){
   setlocale(LC_ALL,"Portuguese_Brazil");
   
     printf("Calculadora");
    
    float valor1, valor2, valor3,somatorio,subtracao;
      
    printf("Digite um Valor:");
    scanf("%f",&valor1);
    
    printf("Digete um número que queria soma com o número de cima:");
    scanf("%f",&valor2);
    
    somatorio=valor1+valor2;
     
    printf("Digite um valor que deseja subtrair:");
    scanf("%f",&valor3);
    
    subtracao=somatorio-valor3;
    
    printf("Resultado %.3f",subtracao);
return 1;
}