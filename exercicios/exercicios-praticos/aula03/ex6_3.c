// Escreva uma função recursiva que apague todos os # de um vetor c[0..n-1] de caracteres ASCII.  
// Exemplo: Se n vale 7 e o vetor contém   a b c # # d #   então o resultado deve ser   a b c d .

#include <stdio.h>

int apaga_hash(int n, char c[]) {
    if (n == 0) {
        return 0; // Caso base: vetor vazio
    }
    
    // Chamada recursiva para o restante do vetor
    int m = apaga_hash(n - 1, c);
    
    // Se o caractere atual não é '#', mantemos ele no vetor
    if (c[n - 1] != '#') {
        c[m] = c[n - 1];
        return m + 1; // Incrementa o tamanho do vetor resultante
    }
    
    // Se for '#', simplesmente retornamos o tamanho atual sem incrementá-lo
    return m;
}

int main() {
    char c[] = {'a', 'b', 'c', '#', '#', 'd', '#'};
    int n = 7;

    int novo_tamanho = apaga_hash(n, c);

    // Imprime o vetor resultante
    for (int i = 0; i < novo_tamanho; i++) {
        printf("%c ", c[i]);
    }
    // Saída esperada: a b c d

    return 0;
}