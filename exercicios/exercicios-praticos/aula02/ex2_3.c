// A seguinte função promete acrescentar uma célula-cabeça à lista encadeada 
// lst e devolver o endereço da nova lista. Onde está o erro?

// celula *acrescentaCabeca (celula *lst) {
//    celula cabeca;
//    cabeca.prox = lst;
//    return &cabeca; 
// }

// Resposta: A variável cabeca é alocada na pilha (stack) e deixa de existir quando a função termina.
// Portanto, o ponteiro retornado aponta para um endereço inválido(dangling pointer).
// A célula cabeca aponta para o início da lista passada como argumento (lst) - correto.
// O problema é que a célula cabeca em si não existe mais quando a função termina

//Forma correta:
#include <stdlib.h>
typedef struct celula {
    int valor;
    struct celula *prox;
} celula;

celula *acrescentaCabeca(celula *lst) {
    celula *cabeca = malloc(sizeof(celula));
    if (cabeca == NULL) return NULL; // sempre bom verificar
    cabeca->prox = lst;
    return cabeca;
}
