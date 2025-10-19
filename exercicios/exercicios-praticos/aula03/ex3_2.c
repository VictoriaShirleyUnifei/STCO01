//Quantas comparações entre x e elementos do vetor v a função busca_r faz?

int busca_r(int n, int v[], int x) {
    if (n <= 0) {
        return -1; // Elemento não encontrado
    }
    if (v[n - 1] == x) {
        return n - 1; // Retorna o índice do último elemento igual a x
    }
    return busca_r(n - 1, v, x); // Chamada recursiva para o restante do vetor
}

//Resposta: A função busca_r faz n comparações entre x e os elementos do vetor v,
//onde n é o tamanho do vetor, no pior caso (quando x não está presente no vetor).
//No melhor caso (quando o último elemento é igual a x), faz apenas 1 comparação.
//No caso médio, o número de comparações será aproximadamente n/2.
//Portanto, o número de comparações varia de 1 a n, dependendo da posição de x no vetor.