//Suponha que i é uma variável inteira e v um vetor de inteiros. 
//Descreva, em português, a sequência de operações que o computador 
//executa para calcular o valor da expressão  &v[i + 9] .

//Resposta: O valor de i é somado a 9, resultando em um novo índice.
//Esse índice é então multiplicado pelo tamanho de um inteiro (geralmente 4 bytes
//em sistemas modernos) para calcular o deslocamento em bytes a partir do início do vetor v.
//Finalmente, esse deslocamento é adicionado ao endereço base do vetor v   
//para obter o endereço do elemento v[i + 9]. O operador & retorna esse endereço.
//Portanto, &v[i + 9] é o endereço do elemento na posição i + 9 do vetor v.

// Exemplo numérico (com sizeof(int) = 4):

// Endereço base de v = 1000.
// i = 3.
// i + 9 = 12.
// Endereço de v[12] = 1000 + (12 * 4) = 1000 + 48 = 1048.
// Logo:
// &v[i+9] → 1048