#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(int argc, char * argv[]) {

    pilha P = criar_pilha();
    empilhar(P, 'H');
    empilhar(P, 'O');
    empilhar(P, 'K');
    char c = desempilhar(P);
    printf("%c\n", c);
    c = desempilhar(P);
    printf("%c\n", c);
    c = desempilhar(P);
    printf("%c\n", c);
    liberar_pilha(P);
    return 0;
}