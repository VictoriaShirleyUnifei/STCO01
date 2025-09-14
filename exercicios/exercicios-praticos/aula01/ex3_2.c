//Por que o código abaixo está errado?
// void troca (int *i, int *j) {
//    int *temp;
//    *temp = *i; *i = *j; *j = *temp;
// }

//Resposta: A variável temp é um ponteiro 
//que não foi inicializado para apontar para um endereço válido 
//antes de ser desreferenciado. 
//Isso leva a um comportamento indefinido
//quando tentamos acessar ou modificar o valor apontado por temp.

//Correção:
#include <stdio.h>  
void troca (int *i, int *j) {
   int temp; // Declarar temp como uma variável inteira
   temp = *i; // Armazenar o valor apontado por i em temp
   *i = *j;   // Atribuir o valor apontado por j ao local apontado por i
   *j = temp; // Atribuir o valor armazenado em temp ao local apontado por j
}

//SAÍDA ESPERADA
//Se i = 5 e j = 10, após a chamada de troca(&i, &j),
//então i = 10 e j = 5.