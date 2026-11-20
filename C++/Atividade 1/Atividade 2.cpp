#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"Portuguese");

float temperatura;

printf ("Digite a temperatura: ");
scanf ("%f",&temperatura);

if (temperatura<18)
{
	printf ("O tempo está frio!!\n");
}
else if (temperatura >=18 && temperatura <=30)
{
	printf("O tempo está agradável!!\n");
}
else 
{
	printf("O tempo está quente!!\n");
}

return 0;
}
