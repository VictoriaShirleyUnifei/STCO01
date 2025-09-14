// Compile e execute o seguinte programa. 
// (O cast (long int) é necessário para que &i 
// possa ser impresso no formato %ld. 
//É mais comum imprimir endereços em notação hexadecimal, 
// usando formato %p, que exige o cast (void *).)

#include <stdio.h>
#include <stdlib.h>

int main (void) {
   int i = 1234; 
   printf (" i = %d\n", i);
   printf ("&i = %ld\n", (long int) &i);
   printf ("&i = %p\n", (void *) &i);
   return EXIT_SUCCESS;
}

//SAíDA ESPERADA
//i = 1234;
//long int &i = 6422296;
//&i = 0x61fe98