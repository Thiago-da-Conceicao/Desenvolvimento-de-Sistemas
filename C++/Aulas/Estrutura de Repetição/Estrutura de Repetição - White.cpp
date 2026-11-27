#include <stdio.h>
#include <locale.h>

int main (){
	
setlocale (LC_ALL, "portuguese");

// Declarar variável de controle
int i = 1;
int qtd; 

printf ("Digite quantas vezes seu nome vai se repetir: ");
scanf ("%d", &qtd);

// Ecrever seu nome 10 vezes repetidamente;
while(i <= qtd){
	printf ("%d Thiago \n",i) ;
	i++;
}





return 0;
}
