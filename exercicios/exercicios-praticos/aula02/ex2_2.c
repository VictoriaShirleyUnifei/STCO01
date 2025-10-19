// A seguinte função promete devolver um vetor com os 3 primeiros números primos maiores que 1000.
// Onde está o erro?
// int *primos (void) {
//    int v[3];
//    v[0] = 1009; v[1] = 1013; v[2] = 1019;
//    return v; }

// Resposta: A variável v é alocada na pilha (stack) e deixa de existir quando a função termina.
// Portanto, o ponteiro retornado aponta para um endereço inválido(dangling pointer).

//Forma correta:
int *primos(void) {
    int *v = malloc(3 * sizeof(int));
    v[0] = 1009; v[1] = 1013; v[2] = 1019;
    return v;
}