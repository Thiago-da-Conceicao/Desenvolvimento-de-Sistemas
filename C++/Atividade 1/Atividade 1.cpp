#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"Portuguese");

float n1;

printf ("Digite um número qualquer: ");
scanf ("%f",&n1);

if (n1 >=0)
{
	printf ("Seu número é positivo!!\n");
}
else
{
	printf("Seu número é negativo!!\n");
}

return 0;
}
