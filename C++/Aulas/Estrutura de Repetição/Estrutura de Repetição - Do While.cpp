#include <stdio.h>
#include <locale.h>

int main (){
	
setlocale (LC_ALL, "portuguese");

// Declarar variável de controle
int i = 1;
int n1; 

printf ("Digite a tabuada que deseja: ");
scanf ("%d", &n1);

// Obrigatóriamante executa o comando uma única vez antes de repetir
do{
	printf ("%d x %d = %d \n", i, n1, n1 * i);	i++;
}
while (i <= 10);

return 0;
}

