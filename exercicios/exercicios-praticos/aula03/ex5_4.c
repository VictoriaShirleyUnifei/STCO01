// Rediscuta o problema da inserção sob condições mais gerais: 
// Suponha que a parte relevante do vetor v é v[i..m-1]; 
// para inserir x entre v[k-1] e v[k] você tem duas opções: 
// empurrar v[k..m-1] para a direita ou puxar v[i..k-1] para a esquerda; 
// escolha a opção mais rápida.  
// (E não esqueça de atualizar os valores de i e m.)

#include <stdio.h>

void insere_otimizado(int i, int m, int k, int x, int *n, int v[]) {
    if (*n >= 100) return; // Verifica se há espaço no vetor

    // Decide a direção do deslocamento com base na posição de k
    if (k - i < m - k) {
        // Puxar v[i..k-1] para a esquerda
        for (int j = i; j < k - 1; j++) {
            v[j] = v[j + 1];
        }
        v[k - 1] = x; // Insere x na posição k-1
    } else {
        // Empurrar v[k..m-1] para a direita
        for (int j = m; j > k; j--) {
            v[j] = v[j - 1];
        }
        v[k] = x; // Insere x na posição k
    }
    (*n)++; // Atualiza o tamanho do vetor
}