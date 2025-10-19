// Critique a seguinte versão da função busca:
// int sol;
// for (int k = 0; k < n; ++k) {
//    if (v[k] == x) sol = k;
//    else sol = -1; 
// }
// return sol;

// Resposta: Esta versão da função busca tem um problema lógico que pode levar a resultados incorretos.
// O problema está na forma como a variável sol é atualizada dentro do loop for.
// A cada iteração, se v[k] for igual a x, sol é atualizado para k.
// No entanto, se v[k] não for igual a x, sol é definido como -1.
// Isso significa que mesmo que x tenha sido encontrado em uma iteração anterior,
// se uma iteração subsequente não encontrar x, sol será atualizado para -1,
// indicando erroneamente que x não está presente no vetor.

// Para corrigir isso, a atualização de sol para -1 deve ser feita apenas uma vez,
// antes do loop começar, e não dentro do loop.
// A versão corrigida seria:
// int sol = -1; // Inicializa sol como -1, assumindo que x não está no vetor
// for (int k = 0; k < n; ++k) {
//    if (v[k] == x) sol = k; // Atualiza sol apenas se x for encontrado
// }