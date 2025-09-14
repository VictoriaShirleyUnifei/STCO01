#include <stdio.h>
#include <stdlib.h>

typedef struct celula celula;

struct celula{
  int valor;
  celula* prox;
};

void imprime_lista(celula* lista){
  if(lista == NULL) return;
  printf("%d ", lista->valor);
  imprime_lista(lista->prox);
  return;
}

celula * criar_celula(int v){
  celula* cel = (celula*) malloc(sizeof(celula));
  cel->valor = v;
  cel->prox = NULL;
  return cel;
}

celula* insere_lista(celula* L, int v){
  celula* cel = criar_celula(v);
  cel->prox = L;
  return cel;
}


/* busca por V na lista L, se achar
devole o endereço da celula que tem v
senão devolve NULL */
celula* busca(celula *L, int v){
  if(L == NULL) return NULL;
  if(L->valor == v) return L;
  return busca(L->prox, v);
}


void libera_lista(celula* L){
  if(L == NULL) return;
  libera_lista(L->prox);
  free(L);
}


/* Essa função ainda não funciona, aqui é um insight */
celula* remover_lista(celula* L, int v){
  if(L == NULL) return NULL;
  if(L->prox != NULL && L->prox->valor == v){
    celula * aux = L->prox;
    L->prox = L->prox->prox;
    free(aux);
    return L;
  }
  L->prox = remover_lista(L->prox, v);
  return L;
}

int main(int argc, char* argv[]){
  celula* L = NULL;
  L = insere_lista(L, 3);
  L = insere_lista(L, 6);  
  L = insere_lista(L, 5);
  L = insere_lista(L, 4);
  imprime_lista(L);
  printf("\n");
  
  celula* resultado = busca(L, 6);
  if(resultado == NULL){
    printf("Não achei 6\n");
  }else{
    printf("Achei %d\n", resultado->valor);
  }
  
  resultado = busca(L, 7);
  if(resultado == NULL){
    printf("Não achei 7\n");
  }else{
    printf("Achei %d\n", resultado->valor);
  }
  
  L = remover_lista(L, 3);
  imprime_lista(L);
  printf("\n");
  L = remover_lista(L, 5);
  imprime_lista(L);
  printf("\n");
  L = remover_lista(L, 4);
  imprime_lista(L);
  printf("\n");
  
  libera_lista(L);
  L = NULL;
  
  return 0;
}