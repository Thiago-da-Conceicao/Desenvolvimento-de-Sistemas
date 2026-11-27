#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL,"Portuguese");
	
	int test[5];
	int valor;
	int i=0;
	int maior = test[0];
	int menor = test[0];
	int imenor = 0;
	int imaior = 0;
	
	for (i=0; i<5; i++){
		printf ("Digite o valor da posição %d\n",i);
		scanf ("%d", &valor);
		test[i] = valor;
		
	}
	for (i=0; i<5; i++){
		printf ("O valor da posição %d é %d\n",i,test[i]);
		
		if (maior < test[i]){
			maior = test[i];
			imaior = i;
		}
		
		if (menor > test[i]){
			menor = test[i];
			imenor = i;
		}
	}
	printf("Seu maior valor é: %d\nSeu indice é: %d\n", maior,imaior);
	printf("Seu menor valor é: %d\nSeu indice é: %d\n", menor,imenor);
	



	return 0;
}
