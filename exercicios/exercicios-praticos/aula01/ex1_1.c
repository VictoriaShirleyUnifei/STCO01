//1. Tamanhos.  Compile e execute o seguinte programa:
#include <stdio.h>
#include <stdlib.h>

int main (void) {
   typedef struct {
      int dia, mes, ano; 
   } data;
   printf ("sizeof (data) = %d\n", 
            sizeof (data));
   return EXIT_SUCCESS;
}

//SAíDA ESPERADA
//sizeof (data) = 12