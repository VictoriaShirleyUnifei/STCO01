//Quantas comparações entre x e elementos do vetor v a função busca faz?

int busca (int x, int n, int v[]) {
   int k = n-1;
   while (/* A */ k >= 0 && v[k] != x)  
      k -= 1;
   return k; 
}

//No pior caso, a função faz n+1 comparações:
//1. A primeira comparação é feita no ponto A, onde verificamos se k >= 0.
//2. A segunda comparação é feita também no ponto A, onde verificamos se v[k] != x.
//3. Se x não estiver presente no vetor, o loop continuará até que k seja -1,
//   resultando em n iterações do loop.

// Resumo
// Se x está no vetor: número de comparações = n - índice_do_último_x
// Se x não está no vetor: número de comparações = n