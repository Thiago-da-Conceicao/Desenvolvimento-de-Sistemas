#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"Portuguese");

int n1, n2;

printf ("Digite o primeiro número: ");
scanf ("%d",&n1);

printf ("Digite o segundo número: ");
scanf ("%d",&n2);

if (n1 == n2)
{
	printf ("Seus números são iguais!!\n");
}
else if (n1 > n2)
{
	printf("Seu número %d é maior!!\n",n1);
}
else
{
	printf("Seu número %d é maior!!\n",n2);
}

return 0;
}
