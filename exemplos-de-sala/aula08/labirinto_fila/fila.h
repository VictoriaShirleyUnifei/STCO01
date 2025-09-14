typedef struct filaa * fila;

typedef struct pontoo{
  int x;
  int y;
}ponto;

/*Cria uma fila e devolve um apontador para ela*/
fila criar_fila();

void inserir_fila(fila F, ponto p);

ponto remover_fila(fila F);

int fila_vazia(fila F);

void liberar_fila(fila F);




