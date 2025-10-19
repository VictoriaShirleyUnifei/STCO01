//Verifique que a seguinte maneira de escrever a função maximo é exatamente equivalente à dada anteriormente:

int maximo (int n, int v[]) {
   int x;
   if (n == 1) x = v[0];
   else {
      x = maximo (n-1, v); 
      if (x < v[n-1]) x = v[n-1];
   }
   return x;
}

//Resposta:
//Sim, a função acima é equivalente à função maximo dada anteriormente.