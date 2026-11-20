#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int voto;
    int Huguinho = 0;
    int Zezinho = 0;
    int Luizinho = 0;
    int Nulos = 0;
    int totalVotos = 0;
    float H;
    float Z;
    float L;
    float N;
    

    printf("===== ELEIÇÃO =====\n");
    printf("1 - Huguinho\n");
    printf("2 - Zezinho\n");
    printf("3 - Luizinho\n");
    printf("0 - Encerrar votação\n");
    printf("===================\n");

    do {
        printf("\nDigite o seu voto: ");
        scanf("%d", &voto);

    if (voto != 0) {
    switch (voto) {
    case 1: 
    Huguinho++; 
    totalVotos++; 
    break;
    case 2: 
    Zezinho++; 
    totalVotos++; 
    break;
    case 3: 
    Luizinho++; 
    totalVotos++; 
    break;
    default: 
    Nulos++; 
    totalVotos++; 
    break;
    }
    }
    } while (voto != 0); 

    printf("\n===== RESULTADO DA APURAÇÃO =====\n");

    if (totalVotos > 0) {

       H = (Huguinho * 100.0) / totalVotos;
       Z = (Zezinho * 100.0) / totalVotos;
       L = (Luizinho * 100.0) / totalVotos;
       N = (Nulos * 100.0) / totalVotos;

        printf("Total de votos registrados: %d\n\n", totalVotos);

        printf("1 - Huguinho : %d voto(s) (%.2f)\n", Huguinho, H);
        printf("2 - Zezinho  : %d voto(s) (%.2f)\n", Zezinho, Z);
        printf("3 - Luizinho : %d voto(s) (%.2f)\n", Luizinho, L);
        printf("Votos Nulos  : %d voto(s) (%.2f)\n", Nulos, N);
    } else {
        printf("Nenhum voto foi registrado.\n");
    }

    return 0;
}
