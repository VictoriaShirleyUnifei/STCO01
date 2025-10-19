// Considere a função maximo.  
// Se o vetor v[0..n-1] tiver dois os mais elementos máximos, qual deles a função devolve?

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

// Resposta:
// A função devolve o último elemento máximo encontrado no vetor.
// Isso ocorre porque, quando há dois ou mais elementos máximos,
// a comparação "x > v[n-1]" falha para os elementos iguais,
// fazendo com que o último elemento máximo seja retornado.

// Por exemplo, se o vetor for {3, 5, 2, 5}, a função retornará 5,
// que é o último dos dois elementos máximos.

//Se o vetor tiver dois ou mais elementos iguais ao máximo,
//a função maximo devolve o último deles, ou seja, o de maior índice.