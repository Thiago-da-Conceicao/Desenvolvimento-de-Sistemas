#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    float peso, altura, imc;
    
    printf("Digite o seu peso: ");
    scanf("%f", &peso);
    
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    
    imc = peso / (altura * altura);
    
    if (imc < 18.5) 
    {
        printf("IMC= %.2f\n - Abaixo do peso", imc);
    }
     else if (imc >= 18.5 &&  imc <=24.9) 
     {
        printf("IMC= %.2f\n - Peso normal", imc);
     }
     else if (imc >= 25.0 &&  imc <=29.9) 
     {
        printf("IMC= %.2f\n - Sobrepeso", imc);
     }
     else
    {
        printf("IMC= %.2f\n - Obesidade", imc);
    }
    
    
    return 0;
}
