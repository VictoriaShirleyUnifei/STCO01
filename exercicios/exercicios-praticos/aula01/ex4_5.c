//Analise o seguinte programa:

#include <stdio.h>
#include <stdlib.h>

void func1 (int x) {
   x = 9 * x;
}

void func2 (int v[]) {
   v[0] = 9 * v[0];
}

int main (void) {
   int x, v[2];
   x = 111; 

   func1 (x); 
   printf ("x: %d\n", x);

   v[0] = 111; 
   func2 (v); 
   printf ("v[0]: %d\n", v[0]);
   return EXIT_SUCCESS;
}
// O programa produz a seguinte resposta, que achei surpreendente:

// x: 111
// v[0]: 999
// Os valores de x e v[0] não deveriam ser iguais?

// Resposta: Quando um array é passado como argumento para uma função, o que
// é realmente passado é um ponteiro para o primeiro elemento do array. Isso
// significa que qualquer modificação feita no array dentro da função afeta o
// array original. Por outro lado, quando uma variável simples (como um int)
// é passada para uma função, uma cópia do valor é feita. Portanto, qualquer
// modificação feita na variável dentro da função não afeta a variável original. 
// No exemplo acima, func1 recebe uma cópia de x, então a modificação não afeta
// o valor original de x. Já func2 recebe um ponteiro para o array v, então a
// modificação feita em v[0] dentro de func2 afeta o array original v
// declarado em main. Vetores em C são sempre passados por "referência" (na prática, como ponteiro). 
//Mudanças dentro da função afetam o vetor original.


