// Critique a seguinte função. Ela promete eliminar os zeros de v[0..n-1], 
// deixar o resultado em v[0..m-1] e devolver m.

// int tira0 (int n, int v[]) {
//    int z = 0;
//    for (int i = 0; i < n - z; ++i) {
//       if (v[i] == 0) {
//          z += 1;
//          for (int k = i; k < n - z; ++k) 
//             v[k] = v[k+1];
//          --i; } }
//    return n - z; 
// }

// A função tira0 agora percorre o vetor até n - z, onde z é o número de zeros encontrados.
// Quando um zero é encontrado, ele incrementa z e desloca os elementos restantes para a esquerda.
// O índice i é decrementado para reavaliar a posição atual após o deslocamento.
// Mas, ainda assim, essa abordagem pode ser ineficiente para vetores com muitos zeros,
// pois cada remoção envolve um deslocamento de elementos. Uma abordagem mais eficiente
// seria utilizar um vetor auxiliar para armazenar os elementos não nulos e, em seguida,
// copiar esses elementos de volta para o vetor original.