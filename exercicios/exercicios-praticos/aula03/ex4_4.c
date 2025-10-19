// Discuta a seguinte versão de remove_r:

// int remove_r2 (int k, int n, int v[]) {
//    int x = v[k];
//    if (k < n-1) {
//       remove_r2 (k, n-1, v);
//       v[n-2] = v[n-1]; }
//    return x; 
// }

//Resposta: A função remove_r2 apresenta um problema na lógica de remoção do elemento.
// Ao chamar remove_r2 (k, n-1, v), a função está tentando remover o elemento na posição k,
// mas não está ajustando corretamente os índices dos elementos subsequentes.
// Além disso, a atribuição v[n-2] = v[n-1] não é suficiente para remover o elemento,
// pois ela apenas copia o valor do último elemento para a posição anterior, sem
// lidar com a redução do tamanho do vetor.