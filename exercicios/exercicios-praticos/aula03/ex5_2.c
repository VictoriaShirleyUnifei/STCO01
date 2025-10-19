// Escreva uma versão da função insere que cuide de incrementar o valor de n depois da inserção. 
// (Sugestão: Passe o endereço da variável n à função insere.)
#include <stdio.h>

void insere_entre(int k, int x, int *n, int v[]) {
    if (*n >= 100) return; // Verifica se há espaço no vetor
    for (int i = *n; i > k + 1; i--) {
        v[i] = v[i - 1];
    }
    v[k + 1] = x;
    (*n)++;
}

int main() {
    int v[100] = {1, 2, 3, 4, 5};
    int n = 5;

    insere_entre(2, 99, &n, v); // insere 99 entre v[2] e v[3]

    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);
    // Saída: 1 2 3 99 4 5

    return 0;
}

// A função insere_entre agora incrementa o valor de n diretamente,
// já que recebe um ponteiro para n.