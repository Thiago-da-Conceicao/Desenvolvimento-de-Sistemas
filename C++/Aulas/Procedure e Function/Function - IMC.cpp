#include <stdio.h>
#include <locale.h>


// function
float calcularIMC(float peso, float altura) {
    return peso / (altura * altura);
}

// procedure
void exibirClassificacao(float imc) {
    printf("IMC = %.2f\n", imc);

    if (imc < 18.5) {
        printf("Classificacao: Abaixo do peso\n");
    } else if (imc < 25.0) {
        printf("Classificacao: Peso normal\n");
    } else if (imc < 30.0) {
        printf("Classificacao: Sobrepeso\n");
    } else if (imc < 35.0) {
        printf("Classificacao: Obesidade grau I\n");
    } else if (imc < 40.0) {
        printf("Classificacao: Obesidade grau II\n");
    } else {
        printf("Classificacao: Obesidade grau III\n");
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    float peso, altura, imc;

    printf("Digite o seu peso (ex: 70,5): ");
    scanf("%f", &peso);

    printf("Digite sua altura (ex: 1,75): ");
    scanf("%f", &altura);

	// Exibe o valor do calculo do IMC
    imc = calcularIMC(peso, altura);
    
    // Printf da classificação 
    exibirClassificacao(imc);

    return 0;
}
