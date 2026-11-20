#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    
   float num;
   float n1 = 1;
   float maior;
     
   	printf ("Digite 10 Números: \n");
    while (n1 <= 10){
 	scanf ("%f", &num);
   	
   	if (num > maior){
	maior = num;
	}
	n1++;
    }
 
   printf ("O Maior valor é: %.1f ", maior);
   
   
   
    return 0;
}
