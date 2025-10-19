// Critique a seguinte função. Ela promete eliminar os zeros de v[0..n-1], 
// deixar o resultado em v[0..m-1] e devolver m.

// int tira0 (int n, int v[]) {
//    int z = 0;
//    for (int i = 0; i < n; ++i) {
//       if (v[i] == 0) z += 1;
//       v[i-z] = v[i]; }
//    return n - z; 
// }

// A função tira0 apresenta um problema quando há zeros no vetor.
// Ao deslocar os elementos para a esquerda, ela sobrescreve valores que ainda não foram verificados.
// Isso pode levar à perda de dados e a um comportamento inesperado.
