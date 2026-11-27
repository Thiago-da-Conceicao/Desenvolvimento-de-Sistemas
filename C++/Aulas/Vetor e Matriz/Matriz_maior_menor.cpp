#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL,"Portuguese");
	
	int test[4][3];
	int valor;
	int l=0;
	int c=0;
	int maior = test[0][0];
	int menor = test[0][0];

	
	for (l=0; l<4; l++){
		for (c=0; c<3; c++){		
		printf ("Digite o valor da posição [%d] [%d]\n",l,c);
		scanf ("%d", &valor);
		test[l][c] = valor;
		}
	}
			maior = test[0][0];
			menor = test[0][0];
			
	for (l=0; l<4; l++){
		for (c=0; c<3; c++){
		printf ("Posição [%d] [%d] = [%d]\n",l,c,test[l][c]);
		

			
			if (test[l][c] > maior){
				maior = test[l][c];
			}
			if (test[l][c] < menor){
			menor = test[l][c];
			}
		}
	}
	
	printf("Seu maior valor é: %d\n", maior);
	printf("Seu menor valor é: %d\n", menor);
	
	
return 0;
}
