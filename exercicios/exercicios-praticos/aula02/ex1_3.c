// Discuta o efeito do seguinte fragmento de código:
// x = malloc (10 * sizeof *x);


//Assumindo que x é um ponteiro previamente declarado

//Declara x como ponteiro para algum tipo (não especificado).
//malloc reserva espaço no heap para 10 elementos do tipo apontado por x.
//sizeof *x retorna o tamanho do tipo apontado por x.
//Retorna o endereço dessa área e o armazena em x.
//Se não houver memória disponível, x recebe NULL.
//Os valores da memória são indeterminados (lixo).
//Você pode acessar x[0] até x[9].
//Ao terminar, deve liberar com free(x);

//O código aloca dinamicamente memória para 10 elementos 
//do mesmo tipo apontado por x e faz x apontar para esse bloco.
//A forma sizeof *x é mais segura e flexível do que sizeof(tipo).