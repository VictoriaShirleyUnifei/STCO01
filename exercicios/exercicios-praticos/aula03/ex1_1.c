// [Sedgewick 3.11]  Diga (sem usar o computador) qual o conteúdo do vetor  v  depois das seguintes instruções:
// int v[99];
// for (i = 0; i < 99; ++i) v[i] = 98 - i;
// for (i = 0; i < 99; ++i) v[i] = v[v[i]];

// Resposta: O vetor v conterá os valores de 0 a 98 em ordem crescente.

//Primeiro for: v = [98, 97, 96, 95, ..., 2, 1, 0]
//Segundo for: v = [0, 1, 2, 3, ..., 96, 97, 98]