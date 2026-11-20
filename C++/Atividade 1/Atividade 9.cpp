#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int hora=5, valor1, valor2, valor3;
    
    printf("Digite o total de horas: ");
    scanf("%d", &hora);
    
    valor1 = hora * 5;
    valor2 = (hora - 2) * 4 + (2 * 5);
    valor3 = (hora - 4) * 3 + ( 2 * 5 ) + (2 * 4);
    
    if (hora <=2) 
    {
        printf("O valor é: R$ %d\n", valor1);
    }
     else if (hora >=3 && hora <=4) 
     {
        printf("O valor é: R$ %d\n", valor2);
     }
     else
    {
        printf("O valor é: R$ %d\n", valor3);
    }
    
    
    return 0;
}
