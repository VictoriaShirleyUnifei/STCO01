// Critique a seguinte versão da função busca:
// int k = 0;
// while (k < n && v[k] != x) k += 1;
// if (v[k] == x) return k;
// else return -1; 

// Resposta: Esta versão da função busca tem um problema potencial de acesso fora dos limites do vetor.
// Se x não estiver presente no vetor v, o loop while continuará incrementando k até que k seja igual a n.
// Nesse ponto, a condição v[k] == x na instrução if tentará acessar v[n], 
//que está fora dos limites válidos do vetor (0 a n-1).
// Isso pode levar a um comportamento indefinido, 
//como acessar memória inválida ou causar um erro de segmentação.
// Para corrigir isso, a verificação de k deve ser feita antes de acessar v[k]. 
//Uma maneira de fazer isso é modificar a condição do if para:
// if (k < n && v[k] == x) return k;