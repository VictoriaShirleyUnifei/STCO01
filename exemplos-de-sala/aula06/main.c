//FILA - FIFO - First in first out

#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(int argc, char* argv[]) {
    fila F = criar_fila();
    inserir_fila(F, 5);
    inserir_fila(F, 5);

    int prox = remover_fila(F);
    printf("prox: %d\n", prox);
    inserir_fila(F, 11);

    

    return 0;
}