//Escreva uma versão da função remove que cuide de decrementar 
//o valor de n depois da remoção. (Sugestão: Passe o endereço da variável n à função remove.)

int remove_r (int k, int *n, int v[]) {
   int x = v[k];
   if (k < *n-1) { // Note que usamos *n para acessar o valor apontado por n
      int y = remove_r (k+1, n, v); // Chamada recursiva para remover o próximo elemento
      v[k] = y;
   }
   (*n)--;
   return x;
}

//Resposta: A função remove_r foi modificada para receber um ponteiro para n.
// Após a remoção do elemento, o valor de n é decrementado usando (*n)--
// para refletir o novo tamanho do vetor.
