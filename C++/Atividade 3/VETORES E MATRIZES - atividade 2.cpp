#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL,"Portuguese");
	
	int matriz[3][3];
	int valor;
	int l=0;
	int c=0;
	int soma;
	
	
	for (l=0; l<3; l++){
		for (c=0; c<3; c++){		
		printf ("Digite o valor da posição [%d] [%d]\n",l,c);
		scanf ("%d", &valor);
		matriz[l][c] = valor;
		}
	}
	
soma = matriz[0][0]+matriz[1][1]+matriz[2][2];
	
		
	for (l=0; l<3; l++){
		for (c=0; c<3; c++){
		printf ("Posição [%d] [%d] = [%d]\n",l,c,matriz[l][c]);
		
	}
}
	
	printf("A soma dos números da matriz nas posiçõe [0][0], [1][1], [2][2] é: %d\n", soma);

	
	
return 0;
}
