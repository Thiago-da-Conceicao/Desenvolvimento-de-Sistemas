#include <stdio.h>
#include <locale.h>

int main (){
	
setlocale (LC_ALL, "portuguese");

int i = 1;
int n1;
int n2;

printf ("Digite o número inicial da contagem: \n");
scanf ("%d", &n1);
printf ("Digite o número final da contagem: \n");
scanf ("%d", &n2);

i = n1;

while(i <= n2){
	printf ("%d \n",i) ;
	i++;
}



return 0;
}
