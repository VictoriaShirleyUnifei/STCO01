// Critique a seguinte função recursiva que promete encontrar o valor de um elemento máximo de v[0..n-1]:
// int maxim1 (int n, int v[]) {       
//    if (n == 1) return v[0];    
//    if (n == 2) {
//       if (v[0] < v[1]) return v[1];
//       else return v[0];
//    }
//    int x = maxim1 (n-1, v);
//    if (x < v[n-1]) return v[n-1];
//    else return x;
// }

// Resposta:
// A função maxim1 é funcionalmente correta, mas apresenta algumas ineficiências e redundâncias:
// 1. Redundância na Base da Recursão: A função trata separadamente os casos base para n == 1 e n == 2.
//    Isso é desnecessário, pois o caso n == 2 pode ser resolvido pela chamada recursiva padrão.
//    A base da recursão poderia ser simplificada para apenas n == 1.