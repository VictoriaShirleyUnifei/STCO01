// Critique a seguinte função recursiva que promete encontrar o valor de um elemento máximo de v[0..n-1]:

// int maxim2 (int n, int v[]) {
//    if (n == 1) return v[0];
//    if (maxim2 (n-1, v) < v[n-1]) 
//       return v[n-1];
//    else 
//       return maxim2 (n-1, v);
// }

// Resposta:
// A função maxim2 é ineficiente devido à chamada recursiva duplicada.
// A mesma chamada maxim2 (n-1, v) é feita duas vezes,
// o que resulta em um aumento exponencial no número de chamadas recursivas.
// Isso pode ser otimizado armazenando o resultado da chamada em uma variável e reutilizando-o.