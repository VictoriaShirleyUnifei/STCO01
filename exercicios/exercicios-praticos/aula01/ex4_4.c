// O que faz a seguinte função?
// void imprime (char *v, int n) {
//    char *c;
//    for (c = v; c < v + n; c++)
//       printf ("%c", *c);
// }

// Resposta: A função imprime os primeiros n caracteres
// da cadeia de caracteres apontada por v. Ela usa um ponteiro c para percorrer
// a cadeia, começando do endereço v e indo até v + n - 1,
// imprimindo cada caractere usando printf.

#include <stdio.h>
#include <stdlib.h> 

void imprime (char *v, int n) {
   char *c;
   for (c = v; c < v + n; c++)
      printf ("%c", *c);
}

int main (void) {
   char str[] = "Hello, World!";
   imprime(str, 5);
   printf("\n");
   return EXIT_SUCCESS;
}

//SAÍDA ESPERADA
// Hello