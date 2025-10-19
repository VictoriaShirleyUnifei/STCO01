// Discuta a seguinte versão de insere_r:
// int insere_r2 (int k, int x, int n, int v[]) {
//    if (k == n) {
//       v[n] = x;
//       return n + 1; }
//    else {
//       int y = v[k];
//       v[k] = x;
//       return insere_r2 (k+1, y, n, v); } 
// }

// A função insere_r2 insere o elemento x na posição k do vetor v,
// deslocando os elementos a partir de k uma posição para a direita.
// A função retorna o novo tamanho do vetor após a inserção.
