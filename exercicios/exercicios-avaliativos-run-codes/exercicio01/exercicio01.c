#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 1000 // Tamanho máximo da pilha e das expressões

// Variáveis globais da pilha
char pilha[MAX]; // Pilha para armazenar operadores
int topo; // Índice do topo da pilha

// Funções da pilha
void criapilha(void) { // Inicializa a pilha
   topo = 0; // Pilha vazia
}

// Empilha um caractere
void empilha(char y) { // Adiciona caractere ao topo da pilha
   if (topo < MAX) { // Verifica se há espaço na pilha
      pilha[topo++] = y; // Adiciona caractere e incrementa o topo
   }
}

// Desempilha um caractere
char desempilha(void) { // Remove e retorna o caractere do topo da pilha
   if (topo > 0) { // Verifica se a pilha não está vazia antes de desempilhar
      return pilha[--topo]; // Decrementa o topo e retorna o caractere
   }
   return '\0'; // Retorna nulo se a pilha estiver vazia
}

int pilhavazia(void) { // Verifica se a pilha está vazia
   return topo == 0; // Retorna 1 (verdadeiro) se vazia, 0 (falso) caso contrário
}

char vertopo(void) { // Retorna o caractere no topo da pilha sem desempilhar
   if (topo > 0) { // Verifica se a pilha não está vazia
      return pilha[topo-1]; // Retorna o caractere do topo
   }
   return '\0'; // Retorna nulo se a pilha estiver vazia
}

// Função para verificar precedência dos operadores
int precedencia(char op) {
    switch (op) {
        case '^': return 3; // Maior precedência
        case '*': case '/': return 2;
        case '+': case '-': return 1;
        default: return 0;
    }
}

// Função principal de conversão de infixa para posfixa
char *infixaParaPosfixa(char *inf) { // Converte expressão infixa para posfixa, recebe string infixa
   int n = strlen(inf); // Tamanho da expressão infixa
   // Aloca memória para a expressão posfixa
   char *posf = malloc((n+1) * sizeof(char));
   criapilha(); // Inicializa a pilha
   
   int j = 0;// Índice para a expressão posfixa

   for (int i = 0; inf[i] != '\0'; ++i) { // Percorre cada caractere da expressão infixa
      switch (inf[i]) { // Verifica o caractere atual
         char x; // Variável auxiliar para desempilhar operadores
         
         case '(': 
            empilha(inf[i]);
            break;
            
         case ')': 
            // Desempilha até encontrar '('
            while (!pilhavazia() && vertopo() != '(') {
               posf[j++] = desempilha();
            }
            if (!pilhavazia() && vertopo() == '(') {
               desempilha(); // Remove o '('
            }
            break;
            
         case '+': 
         case '-': 
            // Desempilha operadores de maior ou igual precedência
            while (!pilhavazia() && vertopo() != '(' && 
                   precedencia(vertopo()) >= precedencia(inf[i])) {
               posf[j++] = desempilha();
            }
            empilha(inf[i]);
            break;
            
         case '*':
         case '/': 
            // Desempilha operadores de maior ou igual precedência
            while (!pilhavazia() && vertopo() != '(' && 
                   precedencia(vertopo()) >= precedencia(inf[i])) {
               // Para ^, só desempilha se tiver precedência maior
               if (vertopo() == '^' && precedencia(inf[i]) == 2) {
                  posf[j++] = desempilha();
               } else if (vertopo() != '^') {
                  posf[j++] = desempilha();
               } else {
                  break;
               }
            }
            empilha(inf[i]);
            break;
            
         case '^': 
            // Potência: associativa à direita, só desempilha se tiver precedência maior
            while (!pilhavazia() && vertopo() != '(' && 
                   precedencia(vertopo()) > precedencia(inf[i])) {
               posf[j++] = desempilha();
            }
            empilha(inf[i]);
            break;

         default:  
            // Operando: adiciona diretamente à saída
            if (isalnum(inf[i])) {
               posf[j++] = inf[i];
            }
            break;
      }
   }
   
   // Desempilha operadores restantes
   while (!pilhavazia()) {
      if (vertopo() != '(') {
         posf[j++] = desempilha();
      } else {
         desempilha(); // Descarta '(' restantes
      }
   }
   
   posf[j] = '\0';     
   return posf;
}

int main() {
   char infixa[MAX];

   printf("Digite a expressao infixa: ");
   if (fgets(infixa, MAX, stdin) != NULL) {
      infixa[strcspn(infixa, "\n")] = '\0';

      char *posfixa = infixaParaPosfixa(infixa);
      printf("Infixa:  %s\n", infixa);
      printf("Posfixa: %s\n", posfixa);

      free(posfixa);
   }

   return 0;
}