//Que acontece se trocarmos v[j-1] = v[j] por v[j] = v[j+1] no código da função remove?

// Esta função recebe um vetor v[0..n-1]
// e um índice k tal que 0 <= k < n.
// Ela devolve v[k] e remove esse
// elemento do vetor.

int remove_r (int k, int n, int v[]) {
   int x = v[k];
   if (k < n-1) {
      int y = remove_r (k+1, n, v); 
      v[k] = y;
   }
   return x;
}

//Resposta: Se trocarmos v[j-1] = v[j] por v[j] = v[j+1], a função não funcionará corretamente.
// Isso porque a atribuição v[j] = v[j+1] tentaria acessar um índice fora dos limites do vetor
// quando j for igual a n-1, resultando em comportamento indefinido. 
// Além disso, a lógica da remoção do elemento seria comprometida,
// pois o valor correto a ser movido para a posição k não seria obtido corretamente.