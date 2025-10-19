//Máximo.  
//A seguinte função promete calcular o valor de um elemento máximo de um vetor v[0..n-1]. 
//O problema faz sentido quando n vale 0? A função está correta?

int maximo (int n, int v[]) { 
   int x = v[0];
   for (int j = 1; j < n; j += 1)
      if (x < v[j]) x = v[j];
   return x;
}

//Faz sentido trocar  x = v[0]  por  x = 0, 
//como fazem alguns programadores descuidados?  
//Faz sentido trocar  x = v[0]  por  x = INT_MIN?  
//Faz sentido trocar  x < v[j]  por  x <= v[j]?  

//Resposta:
//Não, o problema não faz sentido quando n vale 0, pois o vetor não possui elementos.
//A função não está correta para n = 0, pois tenta acessar v[0], o que é inválido.
//Não faz sentido trocar x = v[0] por x = 0, pois isso não garante que x seja o maior valor do vetor.
//Faz sentido trocar x = v[0] por x = INT_MIN, desde que a biblioteca <limits.h> seja incluída,
//pois isso inicializa x com o menor valor possível, permitindo encontrar o máximo corretamente.
//Não faz sentido trocar x < v[j] por x <= v[j], pois isso poderia levar a atualizações desnecessárias
//quando x já é igual a v[j], sem alterar o resultado final.