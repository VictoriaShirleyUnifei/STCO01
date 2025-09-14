#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

#define MAX_CAP 100

struct filaa{
  int inicio;
  int final;
  ponto* valores;
};

fila criar_fila(){
  fila F = (fila) malloc(sizeof(struct filaa));
  F->valores = (ponto*) malloc(sizeof(ponto) * MAX_CAP);
  F->inicio = 0;
  F->final = 0;
  return F;
}

void inserir_fila(fila F, ponto p){
  if((F->final + 1) % MAX_CAP == F->inicio){
    printf("ERRO FILA CHEIA\n");
    return;
  }
  F->valores[F->final] = p;
  F->final = F->final + 1;
  if(F->final == MAX_CAP){
    F->final = 0;
  }
  return;
}

ponto remover_fila(fila F){
  ponto p;
  p.x = -1; p.y = -1;
  if(F->inicio == F->final){
    printf("Erro fila vazia\n");
    return p;
  }
  p = F->valores[F->inicio];
  F->inicio = F->inicio + 1;
  if(F->inicio == MAX_CAP){
    F->inicio = 0;
  }
  return p;
}


int fila_vazia(fila F){
  if(F->inicio == F->final){
    return 1;
  }
  return 0;
}


void liberar_fila(fila F){
  free(F->valores);
  free(F);
  return;
}















