//Critique a seguinte variante da função busca_r:

int busc (int x, int n, int v[]) {
   if (n == 0) return -1;
   int k = busc (x, n-1, v);
   if (k != -1) return k;
   if (x == v[n-1]) return n-1;
   return -1; 
}

//Resposta: A função busc é uma variante da função busca_r que também procura 
//o índice do último elemento igual a x no vetor v.
//No entanto, essa variante é menos eficiente do que a função busca_r original.
//Isso ocorre porque a função busc faz duas chamadas recursivas: uma para buscar o elemento e outra para verificar se o último elemento é igual a x.
//Em contraste, a função busca_r faz apenas uma chamada recursiva e retorna imediatamente quando encontra o elemento.