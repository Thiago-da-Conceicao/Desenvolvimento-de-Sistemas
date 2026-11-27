#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    float n1, n2, resultado;
    int opcao;
    do {
	
    printf("\n===========================\n");
    printf("= 1 - Soma                =\n");
    printf("= 2 - Subtração           =\n");
    printf("= 3 - Multiplicação       =\n");
    printf("= 4 - Divisao             =\n");
    printf("= 5 - Quadrado (n1 x n1)  =\n");
    printf("= 6 - Quadrado (n2 x n2)  =\n");
	printf("= 7 - Positivo / Negativo =\n");
	printf("= 0 - Sair                =\n");
    printf("\n===========================\n");
    scanf("%d", &opcao);
    
    
    	if (opcao != 0)
	{ 
    	if (opcao != 6) 
		{printf("Digite o valor de N1: ");
    	scanf("%f", &n1);
		}
    
    	if (opcao != 5) 
		{printf("Digite o valor de N2: ");
    	scanf("%f", &n2);
		}
	}
    
    switch(opcao){
    	case 1: resultado = n1 + n2; break;
        case 2: resultado = n1 - n2; break;
        case 3: resultado = n1 * n2; break;
    	case 4: resultado = n1 / n2; break;
        case 5: resultado = n1 * n1; break;
        case 6: resultado = n2 * n2; break;
        case 7:
        if (n1 >= 0)
        {		printf("N1 => Positivo\n");		}
		else
		{		printf("N1 => Negativo\n");		}
         if (n2 >= 0)
        {		printf("N2 => Positivo\n");		}
		else
		{		printf("N2 => Negativo\n");		}
		break;
		default: printf("Saindo...."); 
		break;
	}
	if (opcao !=7 && opcao != 0)
	{printf("O resultado da opcao => %d, e: %.2f", opcao, resultado);
	}
	
	}
	while (opcao !=0);
	
    return 0;
    
}
