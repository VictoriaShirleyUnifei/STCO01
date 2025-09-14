// COMPILE:
//gcc -pedantic-errors -Wall main.c -c 
//gcc -pedantic-errors -Wall fila.c -c 

// LINK:
//gcc -pedantic-errors -Wall fila.o main.o -o exec


#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

void imprime_labirinto(char ** labirinto, int largura, int altura);
void resolve_labirinto(char ** labirinto, int largura, int altura);

int main(int argc, char* argv[]){
  int largura;
  int altura;
  char** labirinto;
  scanf("%d %d\n", &largura, &altura);
  labirinto = (char**) malloc(sizeof(char*) * largura);
  for(int x = 0; x < largura; x++){
    labirinto[x] = (char*) malloc(sizeof(char) * altura);
  }
  
  for(int y = 0; y < altura; y++){
    for(int x = 0; x < largura; x++){
      scanf("%c", &labirinto[x][y]);
    }
    getchar();
  }
  
  imprime_labirinto(labirinto, largura, altura);
  resolve_labirinto(labirinto, largura, altura);
  imprime_labirinto(labirinto, largura, altura);
  
  for(int x = 0; x < largura; x++){
    free(labirinto[x]);
  }
  free(labirinto);
  return 0;
}


void imprime_labirinto(char ** labirinto, int largura, int altura){
}

void resolve_labirinto(char ** labirinto, int largura, int altura){
}
