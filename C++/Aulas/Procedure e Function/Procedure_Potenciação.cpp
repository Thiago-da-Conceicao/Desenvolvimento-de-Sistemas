#include <stdio.h>
#include <locale.h>
#include <math.h>

int potencia (int base, int expoente){
	
	return pow (base, expoente);
	
}

void imprimirResultado(int resultado){
	
	printf ("Resultado = %d\n", resultado);
}

int main (){
	
	setlocale (LC_ALL, "Portuguese");
	int exp;
	int base;
	int resultado;
	
	printf ("Digite o valor da base da potenciação: ");
	scanf ("%d", &base);
	
	printf ("Digite o valor do potenciação: ");
	scanf ("%d", &exp);
	
	// na chamada de uma função é necessario que eu prepare uma variável para receber o retorno
	resultado = potencia(base, exp);
	
	imprimirResultado (resultado);
}
