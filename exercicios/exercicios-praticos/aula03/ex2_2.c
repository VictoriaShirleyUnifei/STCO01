// Suponha que o vetor v[0..n-1] tem dois ou mais elementos iguais a x.  
// Qual deles será apontado pela função busca?

// Resposta: A função busca retornará o índice do último elemento igual a x no vetor v.
// Isso ocorre porque a busca começa do final do vetor (índice n-1) e decrementa k até encontrar x.
// Portanto, se houver múltiplas ocorrências de x, a função continuará a decrementar
// k até encontrar a última ocorrência de x, retornando assim o índice dessa última ocorrência.

// Cenário com múltiplos x:
// Suponha que v contenha dois ou mais elementos iguais a x. Por exemplo:
// v = [3, 5, 7, 5, 2, 5], x = 5

// n = 6

// Inicialmente k = 5, v[5] = 5 == x

// O loop termina imediatamente, retornando k = 5.

// Se v[5] não fosse x, o loop iria para k = 4 e assim por diante.

// Conclusão:
// A função sempre retorna o índice do último elemento igual a x no vetor.
// Ou seja, entre todos os elementos iguais a x, ela aponta o mais à direita.