#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"Portuguese");

int n1, mod1=3, mod2=5;

printf ("Digite um número inteiro qualquer: ");
scanf ("%d",&n1);

if (n1 % mod1 == 0 && n1 % mod2 == 0)
{
	printf ("Seu número é multiplo de 3 e de 5!!\n");
}
else
{
	printf("Seu número não é multiplo de 3 e de 5 simultaneamente!!\n");
}

return 0;
}
