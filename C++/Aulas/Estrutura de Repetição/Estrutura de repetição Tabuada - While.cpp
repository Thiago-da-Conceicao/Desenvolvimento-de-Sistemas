#include <stdio.h>
#include <locale.h>

int main (){
	
setlocale (LC_ALL, "portuguese");

// Declarar variável de controle
int i = 1;
int n1; 

printf ("Digite a tabuada que deseja: ");
scanf ("%d", &n1);


// While passa pela condição antes de entrar em loop
while(i <= 10){
	printf ("%d x %d = %d \n", i, n1, n1 * i) ;
	i++;
}

return 0;
}

