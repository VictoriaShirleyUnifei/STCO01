//Rediscuta o problema da remoção sob condições mais gerais: 
//Suponha que a parte relevante do vetor é v[i..m-1]; 
//para remove v[k], puxe v[k+1..m-1] para a esquerda 
//ou empurre v[i..k-1] para a direita, dependendo de qual das alternativas for mais rápida.  
//(E não esqueça de atualizar os valores de i e m.)

#include <stdio.h>
void remove_general(int k, int *i, int *m, int v[]) {
    if (k - *i < *m - k - 1) {
        // Puxar v[k+1..m-1] para a esquerda
        for (int j = k; j < *m - 1; j++) {
            v[j] = v[j + 1];
        }
        (*m)--; // Atualiza o valor de m
    } else {
        // Empurrar v[i..k-1] para a direita
        for (int j = k; j > *i; j--) {
            v[j] = v[j - 1];
        }
        (*i)++; // Atualiza o valor de i
    }
}