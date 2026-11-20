#include <stdio.h>
#include <locale.h>

int main (){
	
setlocale (LC_ALL, "portuguese");

int i = 0;
int n1;
int n2;


printf ("Digite o número da contagem: \n");
scanf ("%d", &n1);
printf ("Digite o outro número contagem: \n");
scanf ("%d", &n2);


if (n1>n2){
		
for(i = n1; i >= n2; i--){
	printf ("%d \n",i) ;
	
} }

else {
		
for(i = n1; i <= n2; i++){
	printf ("%d \n",i) ;
	
} }



return 0;
}
