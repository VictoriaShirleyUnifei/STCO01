// O que há de errado com o seguinte fragmento de código?
// int *v;
// v = malloc (100 * sizeof (int));
// v[0] = 999;
// free (v+1);

//v + 1 não aponta para o início do bloco alocado, mas sim para o segundo elemento (v[1]).
//A função free() deve sempre receber exatamente o mesmo ponteiro retornado por malloc, calloc ou realloc.
//Passar um endereço diferente (mesmo que dentro do bloco) 
//causa comportamento indefinido (undefined behavior) — pode corromper a memória ou causar crash.

free(v); // libera o bloco corretamente