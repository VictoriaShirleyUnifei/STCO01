//Fazer um programa em C que lê 2 números da entrada padrão do sistema e imprimir sua soma.
#include <stdio.h>
#include <stdlib.h>

void soma(int a, int b, int *result) {
  if(result != NULL){
    *result = a + b;
  }
  return;
}

int main(int argc, char * argv[]) {

  int resultado, n1, n2;
  
  printf("Escreva um numero: \n");
  scanf("%d", &n1);

  printf("Escreva outro numero: \n");
  scanf("%d", &n2);

  soma(n1, n2, &resultado);
  
  printf("A soma dos numeros e: %d\n", resultado);
  return 0;
}

