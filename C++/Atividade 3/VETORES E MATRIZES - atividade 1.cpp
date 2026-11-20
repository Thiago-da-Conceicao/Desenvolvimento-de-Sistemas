#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL,"Portuguese");
	
	int vetor[8];
	int valor;
	int i = 0;
	int par = 0;
	int impar = 0;

	
	for (i=0; i<8; i++){
		printf ("Digite o valor da posição %d\n",i);
		scanf ("%d", &valor);
		vetor[i] = valor;
		
	}
	
	
	for (i=0; i<8; i++){
		printf ("O valor da posição %d é %d\n",i,vetor[i]);
		
		if (vetor[i] % 2 == 0){
			par++;
		}
		
		else {
		impar++;
		}
	}
	printf("A quantidade de números pares é %d\n",par);
	printf("A quantidade de números ímpares é %d", impar);
	



	return 0;
}
