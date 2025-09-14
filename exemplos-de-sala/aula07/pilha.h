typedef struct pilhaa* pilha; //pilha é só o endereço

//cria uma pilha
pilha criar_pilha();

void empilhar(pilha P, char c);

char desempilhar(pilha P);

void liberar_pilha(pilha P);
