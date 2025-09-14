typedef struct filaa * fila;

//cria uma fila e devolve um apontador para ela
fila criar_fila();

void inserir_fila(fila, int v);

int remover_fila(fila F);

void liberar_fila(fila F);

