#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    
   int n2, num;
   int n1 = 1;
   
   
   	printf ("Digite 10 Números: \n");
    while (n1 <= 10){
 	scanf ("%d", &num);
   	
   	if (num % 2 == 0){
   		n2++;
	   }
	   n1++;
   }
   
   printf ("Temos %d números pares", n2);
   
   
   
    return 0;
}

