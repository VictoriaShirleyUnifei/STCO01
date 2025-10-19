//Escreva uma função que insira x entre as posições k e k+1 de um vetor v[0..n-1]. 
//Escreva também uma boa documentação da função.

#include <stdio.h>

/**
 * insere_entre
 * ------------------------------
 * Insere um elemento x **entre as posições k e k+1** do vetor v[0..n-1].
 * 
 * Pré-condições:
 *   - 0 <= k <= n-1
 *   - O vetor tem espaço suficiente para receber mais um elemento
 * 
 * Parâmetros:
 *   - k : índice após o qual x será inserido
 *   - x : valor a ser inserido
 *   - n : tamanho atual do vetor
 *   - v : vetor de inteiros
 * 
 * Pós-condições:
 *   - O elemento x foi inserido entre v[k] e v[k+1]
 *   - Todos os elementos a partir de v[k+1] foram deslocados uma posição para a direita
 *   - O tamanho lógico do vetor deve ser atualizado fora da função (n++ após a chamada)
 */

void insere_entre(int k, int x, int n, int v[]) {
    // Desloca os elementos à direita de k
    for (int j = n; j > k+1; --j) {
        v[j] = v[j-1];
    }
    // Insere x na posição k+1
    v[k+1] = x;
}

int main() {
    int v[10] = {1, 2, 3, 4, 5};
    int n = 5;

    insere_entre(2, 99, n, v); // insere 99 entre v[2] e v[3]
    n++;                        // atualiza tamanho

    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);
    // Saída: 1 2 3 99 4 5

    return 0;
}
