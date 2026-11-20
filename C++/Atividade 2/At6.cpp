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
   	
   	if (num >= 0){
	soma = num + soma;
	}
	n1++;
    }
  
   printf ("A soma dos positivos é %.1f ", soma);
   
   
   
    return 0;
}
