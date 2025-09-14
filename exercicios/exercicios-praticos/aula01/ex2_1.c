//Compile e execute o seguinte programa. (Veja um dos exercícios acima.)
#include <stdlib.h>

int main (void) {
   int i; 
   int *p;
   
   i = 1234; p = &i;
   
   printf ("*p = %d\n", *p);
   printf (" p = %ld\n", (long int) p);
   printf (" p = %p\n", (void *) p);
   printf ("&p = %p\n", (void *) &p);
   return EXIT_SUCCESS;
}

//SAÍDA ESPERADA
//*p = 1234
// p = 6422300
// p = 0061FF1C
//&p = 0061FF18
