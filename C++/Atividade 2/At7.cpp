#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    
   float num;
   float n1 = 1;
   float soma = 0;
     
   	printf ("Digite 10 Números: \n");
    while (n1 <= 10){
 	scanf ("%f", &num);
   	
   	
   	if (num > 35 && num < 55){
	soma = num + soma;
	}
	n1++;
    }
   printf ("0\n");
   printf ("A soma dos números entre 35 e 55 é: %.1f ", soma);
   
   
   
    return 0;
}
