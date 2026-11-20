#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"Portuguese");

float valor, desconto1, desconto2;

printf ("Digite o valor da compra: R$  ");
scanf ("%f",&valor);

desconto1 = valor * 0.90;
desconto2 = valor * 0.85;

if (valor < 100)
{
	printf ("O valor sem desconto é: R$ %.2f\n",valor);
}
else if (valor>=100 && valor <=500)
{
	printf ("O valor com desconto de 10% é: R$ %.2f\n",desconto1);
}
else
{
	printf ("O valor com desconto de 15% é: R$ %.2f\n",desconto2);
}

return 0;
}
