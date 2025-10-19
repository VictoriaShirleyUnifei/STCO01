//Suponha dado um arquivo de texto que contém uma sequência de números inteiros. 
//O comprimento da sequência é desconhecido. 
//Escreva uma função que armazene esses números em um vetor cujo tamanho 
//seja o mínimo necessário. (Leia o arquivo uma só vez!)

#include <stdio.h>
#include <stdlib.h>

// Função que lê números de um arquivo e retorna vetor com tamanho mínimo necessário
int *lerNumeros(const char *nomeArquivo, int *qtdLida) {
    FILE *f = fopen(nomeArquivo, "r");
    if (f == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        *qtdLida = 0;
        return NULL;
    }

    int capacidade = 4;         // tamanho inicial do vetor
    int *vetor = malloc(capacidade * sizeof(int));
    if (!vetor) {
        printf("Erro de alocação.\n");
        fclose(f);
        *qtdLida = 0;
        return NULL;
    }

    int qtd = 0;
    int valor;

    while (fscanf(f, "%d", &valor) == 1) {
        // Se estiver cheio, dobra a capacidade
        if (qtd == capacidade) {
            capacidade *= 2;
            int *temp = realloc(vetor, capacidade * sizeof(int));
            if (!temp) {
                printf("Erro de realocação.\n");
                free(vetor);
                fclose(f);
                *qtdLida = 0;
                return NULL;
            }
            vetor = temp;
        }

        vetor[qtd++] = valor;
    }

    fclose(f);

    // Redimensiona o vetor para o tamanho exato
    if (qtd < capacidade) {
        int *temp = realloc(vetor, qtd * sizeof(int));
        if (temp) vetor = temp;  // se falhar, mantemos o vetor original
    }

    *qtdLida = qtd;
    return vetor;
}

int main(void) {
    int n;
    int *numeros = lerNumeros("numeros.txt", &n);

    if (numeros == NULL) {
        return 1;
    }

    printf("Números lidos (%d):\n", n);
    for (int i = 0; i < n; ++i) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    free(numeros);  // libera memória
    return 0;
}
