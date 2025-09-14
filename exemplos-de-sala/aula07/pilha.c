#include <stdio.h>
#include <stdlib.h> //malloc
#include "pilha.h"

//pilhaa eh apontador para struct pilha

typedef struct elem {
    char c;
    struct elem* prox;
}elemento; // elemento eh struct elem

struct pilhaa {
    elemento* topo;
};

pilha criar_pilha() {
    pilha P = (pilha) malloc(sizeof(struct pilhaa));
    P->topo = NULL;
    return P;
}

void empilhar(pilha P, char c) {
    elemento* e = (elemento*) malloc(sizeof(elemento)); //aloca elemento
    e->prox = P->topo;
    P->topo = e;
    e->c = c;
}

char desempilhar(pilha P) {
    elemento* aux = P->topo;
    P->topo = P->topo->prox;
    char caux = aux->c;
    free(aux);
    return caux;
}

void liberar_elementos(elemento* e) {
    if(e == NULL) return;
    liberar_elementos(e->prox);
    free(e);
}

void liberar_pilha(pilha P) {
    liberar_elementos(P->topo);
    free(P);
    return;
}
