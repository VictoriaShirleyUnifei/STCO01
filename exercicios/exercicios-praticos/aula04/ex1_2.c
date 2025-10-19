// Ao receber v e n >= 1, a função devolve
// o valor de um elemento máximo do
// vetor v[0..n-1].

int maximo (int n, int v[])
{ 
   if (n == 1)
      return v[0];
   else {
      int x;
      x = maximo (n-1, v);
      // x é o máximo de v[0..n-2] 
      if (x > v[n-1]) return x;
      else return v[n-1]; 
   }
}

// Considere a função maximo acima.  
// Faz sentido trocar  return v[0]  por  return 0?  
// Faz sentido trocar  return v[0]  por  return INT_MIN?  
// Faz sentido trocar  x > v[n-1]  por  x >= v[n-1]?

// Resposta:
// Não faz sentido trocar "return v[0]" por "return 0",
// pois 0 pode não ser o valor máximo do vetor, especialmente
// se todos os elementos do vetor forem negativos.
// Não faz sentido trocar "return v[0]" por "return INT_MIN",
// pois INT_MIN é um valor fixo que pode não estar presente
// no vetor e, portanto, não é uma boa representação do máximo.
// Trocar "x > v[n-1]" por "x >= v[n-1]" faz sentido,
// pois isso garantiria que, em caso de empate, o último
// elemento seria retornado como o máximo, o que pode ser
// desejável dependendo do contexto.