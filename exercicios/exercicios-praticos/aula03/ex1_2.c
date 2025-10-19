// Inversão.  Suponha que um vetor v[1..n] contém uma permutação de 1..n. 
// Escreva uma função que inverta essa permutação:  
// se v[i] == j no vetor original, queremos ter v[j] == i no fim da execução da função.

#include <stdio.h>

void inverter_permutacao(int v[], int n) {
    int v_inv[n+1]; // vetor auxiliar para armazenar a inversa, considerando indices de 1..n

    for (int i = 1; i <= n; i++) {
        int j = v[i];    // valor original
        v_inv[j] = i;    // coloca i na posição j
    }

    // copia de volta para v
    for (int i = 1; i <= n; i++) {
        v[i] = v_inv[i];
    }
}

// Exemplo de uso
int main() {
    int v[6] = {0, 3, 5, 1, 4, 2}; // v[1..5] = {3,5,1,4,2}, índice 0 ignorado
    int n = 5;

    inverter_permutacao(v, n);

    for (int i = 1; i <= n; i++)
        printf("%d ", v[i]); // saída esperada: 3 5 1 4 2 → invertida
    printf("\n");

    return 0;
}
