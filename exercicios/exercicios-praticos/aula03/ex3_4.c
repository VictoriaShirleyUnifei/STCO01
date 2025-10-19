//Critique a seguinte variante da função busca_r:

int busc (int x, int n, int v[]) {
   if (v[n-1] == x) return n-1;
   else return busc (x, n-1, v); 
}

//Resposta: A função busc é uma variante da função busca_r que também 
//procura o índice do último elemento igual a x no vetor v.
//No entanto, essa variante é menos eficiente do que a função busca_r original.
//Isso ocorre porque a função busc faz uma chamada recursiva a mais do que o necessário.
//Em vez de retornar imediatamente quando encontra o elemento, ela continua a busca até o final do vetor.