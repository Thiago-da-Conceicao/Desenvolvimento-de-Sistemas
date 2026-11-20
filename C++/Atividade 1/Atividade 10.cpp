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
        printf("IMC= %.2f\n - Abaixo do peso - Risco de desnutrição.", imc);
    }
     else if (imc >= 18.5 &&  imc <=24.9) 
     {
        printf("IMC= %.2f\n - Peso normal - Mantenha hábitos saudáveis.", imc);
     }
     else if (imc >= 25.0 &&  imc <=29.9) 
     {
        printf("IMC= %.2f\n - Sobrepeso - Cuidado com a alimentação. ", imc);
     }
     else if (imc >= 30.0 &&  imc <=34.9) 
     {
        printf("IMC= %.2f\n - Obesidade Grau 1 - Procure orientação médica", imc);
     }
     else if (imc >= 35.0 &&  imc <=39.9) 
     {
        printf("IMC= %.2f\n - Obesidade Grau 2 - Risco elevado", imc);
     }
     else
    {
        printf("IMC= %.2f\n - Obesidade Grau 3 - Risco Grave", imc);
    }
    
    
    return 0;
}
