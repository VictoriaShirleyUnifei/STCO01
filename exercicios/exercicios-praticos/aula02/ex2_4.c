// Discuta, passo a passo, o efeito do seguinte fragmento de código:

// int *p, *q;
// p = malloc (sizeof (int));
// *p = 123;
// q = malloc (sizeof (int));
// *q = *p;
// q = p; 
// free (p);
// free (q); // má ideia...
// q = NULL; // boa ideia

// Resposta:
// 1. int *p, *q;
// Declara dois ponteiros para inteiros, p e q. Inicialmente, ambos não apontam para nenhum endereço válido.
// 2. p = malloc (sizeof (int));
// Aloca memória suficiente para armazenar um inteiro e atribui
// o endereço dessa memória ao ponteiro p.
// 3. *p = 123;
// O valor 123 é armazenado na memória apontada por p.
// 4. q = malloc (sizeof (int));
// Aloca memória suficiente para armazenar um inteiro e atribui
// o endereço dessa memória ao ponteiro q.
// 5. *q = *p;
// O valor armazenado na memória apontada por p (123) é copiado
// para a memória apontada por q.
// 6. q = p;
// O ponteiro q agora aponta para o mesmo endereço que p.
// A memória originalmente alocada para q (na etapa 4) torna-se inacessível,
// resultando em um vazamento de memória (memory leak).
// 7. free (p);
// A memória apontada por p (e agora também por q) é liberada.
// Após essa operação, ambos os ponteiros p e q tornam-se inválidos
// (dangling pointers), pois apontam para memória que já foi liberada.
// 8. q = NULL;
// Atribui NULL a q, tornando-o um ponteiro nulo e evitando
// que ele se torne um dangling pointer.
