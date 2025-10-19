// Considere a função maximo.  
//Quantas comparações envolvendo elementos do vetor sua função faz no pior caso?

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
// No pior caso, a função faz n-1 comparações, onde n é o número de elementos do vetor.
// Isso ocorre porque, em cada chamada recursiva, a função compara o máximo encontrado
// até o momento (x) com o próximo elemento do vetor (v[n-1]).