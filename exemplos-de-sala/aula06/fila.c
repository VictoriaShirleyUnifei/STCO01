#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

#define MAX_CAP 100

struct filaa
{
    int inicio;
    int final;
    int* valores;
};

fila criar_fila() {
    fila F = (fila) malloc(sizeof(struct filaa));
    F->valores = (int*) malloc(sizeof(int) * MAX_CAP);
    F->inicio = 0;
    F-> final = 0;
    return F;
}

void inserir_fila(fila F, int v) {
    if(F->final >= MAX_CAP) {
        printf("ERRO FILA CHEIA\n");
        return;
    };
    F->valores[F->final] = v;
    F->final = F->final + 1;
    return; //e se a fila não tiver mais espaço?
}

int remover_fila(fila F) {
    if(F->inicio == F->final) {
        printf("ERRO FILA VAZIA\n");
        return -1;
    }
    int v = F->valores[F->inicio];
    F->inicio = F->inicio + 1;
    return v;
}

void liberar_fila() {

}

//vetor circular