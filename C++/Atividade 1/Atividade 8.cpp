#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int n1, n2, n3;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    
    printf("Digite o terceiro número: ");
    scanf("%d", &n3);
   
   if (n1 + n2 > n3 && n1 + n3 > n2 && n2 + n3 > n1)
   
    if ( n1 == n2 && n2 == n3) 
    {
        printf("O triângulo e um equilátero");
    }
     else if (n1 == n2 || n1 == n3 || n2 == n3) 
     {
        printf("O triângulo é um isósceles");
     }
     else 
     {
        printf("O triângulo é um escaleno");
     }
     else
    {
        printf("Não é um triàngulo");
    }
    
    
    return 0;
}
