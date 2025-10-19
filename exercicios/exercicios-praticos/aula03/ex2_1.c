//Qual o invariante do processo iterativo na função busca?

int busca (int x, int n, int v[]) {
   int k = n-1;
   while (/* A */ k >= 0 && v[k] != x)  
      k -= 1;
   return k; 
}

//No início de cada iteração, ou seja, a cada passagem pelo ponto A, temos a seguinte propriedade invariante:
//x  é diferente de todos os elementos de  v[k+1..n-1].

//Um invariante é uma propriedade que sempre é verdadeira no início de cada iteração do loop. 
//É uma maneira de raciocinar sobre a corretude do algoritmo.

// O invariante é uma forma de manter o raciocínio sobre a busca:
// Ele garante que todos os elementos que ainda não foram verificados 
// não estão na faixa que já foi percorrida.
// Quando o loop termina, duas coisas podem acontecer:
// k < 0 → nenhum elemento igual a x foi encontrado → retornamos -1.
// v[k] == x → encontramos x na posição k.
// O invariante ajuda a provar que o algoritmo retorna a posição correta 
// de x ou indica corretamente que ele não existe no vetor.