// Discuta, passo a passo, o efeito do seguinte fragmento de código:


//int *v; 
//v = malloc (10 * sizeof (int));

//Declara v como ponteiro para int.
//malloc reserva espaço no heap para 10 inteiros.
//Retorna o endereço dessa área e o armazena em v.
//Se não houver memória disponível, v recebe NULL.
//Os valores da memória são indeterminados (lixo).
//Você pode acessar v[0] até v[9].
//Ao terminar, deve liberar com free(v);.

