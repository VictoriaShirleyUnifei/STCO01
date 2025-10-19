//Suponha dado um arquivo de texto que contém uma sequência de números inteiros. 
//O comprimento da sequência é desconhecido. 
//Escreva uma função que imprima esses números em ordem inversa (o último, depois o penúltimo, etc.).  
//É claro que você terá que ler todos os números e armazená-los na memória.  
//A dificuldade está em alocar espaço para uma quantidade de números que só 
//será conhecida quando chegarmos ao fim do arquivo.

#include <stdio.h>
#include <stdlib.h>

void imprimeReverso(const char *nomeArquivo) {
    FILE *f = fopen(nomeArquivo, "r");
    if (f == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    int *numeros = NULL;  // ponteiro para armazenar os inteiros
    int qtd = 0;          // quantidade de números lidos
    int valor;

    // Lê até o fim do arquivo
    while (fscanf(f, "%d", &valor) == 1) {
        // Redimensiona o vetor para caber mais um número
        int *temp = realloc(numeros, (qtd + 1) * sizeof(int));
        if (temp == NULL) {
            printf("Erro de alocação de memória.\n");
            free(numeros);
            fclose(f);
            return;
        }
        numeros = temp;
        numeros[qtd] = valor;
        qtd++;
    }

    fclose(f);

    // Imprime em ordem inversa
    printf("Números em ordem inversa:\n");
    for (int i = qtd - 1; i >= 0; --i) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    // Libera memória
    free(numeros);
}

int main(void) {
    imprimeReverso("numeros.txt");
    return 0;
}
