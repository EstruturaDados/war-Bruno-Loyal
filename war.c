
#include <stdio.h>
#include <string.h> 

// max territorios
#define MAX_TERRITORIOS 5
#define TAM_NOME 30
#define TAM_COR 10

struct Territorio {
    char nome [TAM_NOME]; 
    char cor[TAM_COR];
    int tropas; 
};

int main () {
    // array armezenar
    struct Territorio mapa[MAX_TERRITORIOS];

    int i;

    printf("===========================================\n");
    printf("        CADASTRO DE TERRITORIOS (%d)\n", MAX_TERRITORIOS);
    printf("===========================================\n");

    for (i = 0; i < MAX_TERRITORIOS; i++) {
        printf("\n--- Territorio %d ---\n", i + 1);

        // dados injetados
        printf("Digite o nome do Territorio (sem espaco): ");
        scanf("%s", mapa[i].nome);

        printf("Digite a cor do exercito: ");
        scanf("%s", mapa[i].cor);

        printf("Digite a quantidade de tropas: ");
        scanf("%d", &mapa[i].tropas);

        while (getchar() != '\n' && !feof(stdin));
    }

    // Tela de exibição inject

    printf("\n\n===========================================\n");
    printf("         DADOS DOS TERRITORIOS REGISTRADOS\n");
    printf("===========================================\n");

    for (i = 0; i < MAX_TERRITORIOS; i++) {
        printf("\n [%d] TERRITORIO:  %s\n", i + 1, mapa[i].nome);
        printf("\n Cor do Exercito:  %s\n", mapa[i].cor);
        printf("\n Tropas alocadas:  %d\n", mapa[i].tropas);
    }
    printf("\n===========================================\n");
    
    
    
    return 0;
}

