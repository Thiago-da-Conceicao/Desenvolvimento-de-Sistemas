#include <stdio.h>
#include <locale.h>

int main (){
	
setlocale (LC_ALL, "Portuguese");

// Declarar variável de controle
int i = 1;
int inicio; 
int fim;
int passo;

printf ("Digite o número inicial da contagem: ");
scanf ("%d", &inicio);

printf ("Digite o número final da contagem: ");
scanf ("%d", &fim);

printf ("Digite a incremento da contagem: ");
scanf ("%d", &passo);


// Estrutura For (Quando sabe o número de vezes que deve ser executado

for (i = inicio; i <= fim; i = i + passo){
	printf ("%d \n", i);
}



return 0;
}

