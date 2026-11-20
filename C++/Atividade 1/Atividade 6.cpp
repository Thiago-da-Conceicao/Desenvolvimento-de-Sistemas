#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"Portuguese");

int idade;

printf ("Digite a sua idade: ");
scanf ("%d",&idade);

if (idade >16 && idade <69)
{
	printf ("Você pode doar sangue!!\n");
}
else
{
	printf("você não pode doar sangue!!\n");
}

return 0;
}
