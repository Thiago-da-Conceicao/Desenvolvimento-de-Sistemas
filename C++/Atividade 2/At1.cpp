#include <stdio.h>
#include <locale.h>

int main (){
	
setlocale (LC_ALL, "portuguese");

int i = 1;
int fim = 25; 


while(i <= fim){
	printf ("%d \n",i) ;
	i++;
}





return 0;
}
