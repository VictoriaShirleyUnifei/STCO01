//Suponha que o vetor v[0..n-1] tem dois ou mais elementos iguais a x.  
//Qual deles será apontado pela função busca_r?

int busca_r(int n, int v[], int x) {
    if (n <= 0) {
        return -1; // Elemento não encontrado
    }
    if (v[n - 1] == x) {
        return n - 1; // Retorna o índice do último elemento igual a x
    }
    return busca_r(n - 1, v, x); // Chamada recursiva para o restante do vetor
}

//Resposta: A função busca_r retornará o índice do último elemento igual a x no vetor v.