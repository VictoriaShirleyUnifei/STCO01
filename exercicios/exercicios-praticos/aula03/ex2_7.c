//Máximo.  
//A função abaixo promete encontrar o valor de um elemento 
//máximo de v[0..n-1]. A função cumpre a promessa?

int maxi (int n, int v[]) {       
   int m = v[0];
   for (int j = 1; j < n; ++j)
      if (v[j-1] < v[j]) m = v[j];
   return m;
}

//Resposta:
//Não. A função não cumpre a promessa de encontrar o valor máximo do vetor v[0..n-1].
//O problema está na condição dentro do loop for. A condição if (v[j-1] < v[j]) 
//verifica apenas se o elemento atual v[j] é maior que o elemento anterior v[j-1].
//Se for, ela atualiza m para v[j]. No entanto, isso não garante que m
//será o maior valor do vetor, pois pode haver outros elementos maiores
//em posições anteriores que não são comparados diretamente com o maior valor atual.