// Verifique que a seguinte maneira de escrever a função maximo é exatamente equivalente à dada acima:

// int maximo (int n, int v[]) { 
//    if (n == 1) return v[0];
//    int x = maximo (n-1, v);
//    if (x > v[n-1]) return x;
//    else return v[n-1]; 
// }

// Resposta:
// Sim, a função acima é equivalente à função maximo dada anteriormente.