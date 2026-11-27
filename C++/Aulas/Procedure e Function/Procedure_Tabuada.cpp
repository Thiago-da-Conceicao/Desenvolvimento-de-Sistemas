#include <stdio.h>
#include <locale.h>

void imprimirTabuada(int valor){
	int i; 
	for (i = 1; i <= 10; i++){

	printf("%d x %d = %d\n", i, valor, i * valor);
}
	}
	
int main(){
	setlocale (LC_ALL, "Portuguese");
	int num;
	
	printf("Digite o número da tabuada: ");
	scanf ("%d", &num);
	
	imprimirTabuada (num);
}
