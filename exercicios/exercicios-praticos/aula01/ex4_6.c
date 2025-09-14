// O seguinte fragmento de código pretende decidir se abacate 
// vem lexicograficamente antes ou depois de uva. 
// (Veja a seção Cadeias constantes do capítulo Strings.)  O que está errado?

// char *a, *b;
// a = "abacate"; b = "uva";
// if (a < b)
//    printf ("%s vem antes de %s\n", a, b);
// else
//    printf ("%s vem depois de %s\n", a, b);

// Resposta: O código compara os endereços de memória das strings
// ao invés de comparar os conteúdos das strings. Para comparar 
// lexicograficamente, deve-se usar a função strcmp da biblioteca
// string.h, como em:   

#include <stdio.h>
#include <string.h>                 
#include <stdlib.h>

int main (void) {
   char *a, *b;
   a = "abacate"; b = "uva";
   if (strcmp(a, b) < 0)
      printf ("%s vem antes de %s\n", a, b);
   else
      printf ("%s vem depois de %s\n", a, b);
   return EXIT_SUCCESS;
}

//SAÍDA ESPERADA
// abacate vem antes de uva