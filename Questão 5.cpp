#include <stdio.h>
#include <locale.h>

int main(){
   setlocale(LC_ALL,"Portuguese_Brazil");
   
     printf("Calculadora\n\n");
     
    int valor1, valor2, quociente , resto;
    
    printf("Digite o valor que queria ser dividido");
    scanf("%d",&valor1);
    
     printf("Digite o valor que deseja que divida o numero acima\n");
    scanf("%d",&valor2);
 
     quociente=valor1/valor2;
    resto=valor1%valor2;
    
    printf("O quociente foi de: %d\n", quociente);
    
    printf("O resto da divisão foi de %d\n", resto);


return 0;
}