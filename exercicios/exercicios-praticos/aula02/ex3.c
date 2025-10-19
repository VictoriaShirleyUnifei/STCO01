// Escreva uma função que desaloque a matriz M alocada acima. 
// Quais devem ser os parâmetros da função?

// int **M; 
// M = malloc (m * sizeof (int *));
// for (int i = 0; i < m; ++i)
//    M[i] = malloc (n * sizeof (int));

#include <stdio.h>
#include <stdlib.h>

// Função que desaloca uma matriz dinâmica
void desalocaMatriz(int **M, int m) {
    for (int i = 0; i < m; ++i) {
        free(M[i]);  // libera cada linha
    }
    free(M);          // libera o vetor de ponteiros
}

int main(void) {
    int **M;
    int m = 3, n = 4;

    // Alocação da matriz
    M = malloc(m * sizeof(int *));
    if (M == NULL) {
        printf("Erro ao alocar memória para M.\n");
        return 1;
    }

    for (int i = 0; i < m; ++i) {
        M[i] = malloc(n * sizeof(int));
        if (M[i] == NULL) {
            printf("Erro ao alocar memória para M[%d].\n", i);
            // desaloca as linhas já alocadas antes de sair
            desalocaMatriz(M, i);
            return 1;
        }
    }

    // Exemplo de uso: preencher e imprimir
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            M[i][j] = i * n + j;
            printf("%4d", M[i][j]);
        }
        printf("\n");
    }

    // Desalocar a matriz
    desalocaMatriz(M, m);

    return 0;
}
// Parâmetros da função: um ponteiro para ponteiro (int **M) representando a matriz
// e um inteiro (int m) representando o número de linhas da matriz.
// A função percorre cada linha da matriz, liberando a memória alocada para cada uma,
// e finalmente libera o vetor de ponteiros que representa a matriz em si.