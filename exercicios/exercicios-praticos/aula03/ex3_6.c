//Escreva uma função recursiva que receba um inteiro x, 
//um vetor v e índices i e m e devolva um índice k no conjunto i..m-1 tal que  
//v[k] == x;  se tal k não existe, devolva i-1.

int busca_recursiva(int x, int v[], int i, int m) {
    if (i >= m) return i - 1; // Caso base: não encontrou o elemento
    if (v[i] == x) return i; // Encontrou o elemento
    return busca_recursiva(x, v, i + 1, m); // Chamada recursiva para o próximo índice
}

//Resposta: A função busca_recursiva percorre o vetor v do índice i até m-1
//procurando o valor x. Se encontrar, retorna o índice correspondente;
//caso contrário, retorna i-1.