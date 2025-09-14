#include <stdio.h>
#include <stdlib.h>

//funcao que recebe um inicio e um fim e gera e devolve um 
//arranjo que comeca em ini e termina em fim (inclusive)
int *  gera_arranjo(int ini, int fim){
  int tamanho = fim - ini + 1;
  int *P = (int *) malloc(sizeof(int) * tamanho);
  
  for(int i = 0; i < tamanho; i++){
    P[i] = ini + i;
  }
  
  return P;
}


//essa funcao esta errada. Relembre do porque.
int* gera_arranjo_errado(int ini, int fim){
  int tamanho = fim - ini + 1;
  int X[tamanho];
  int *P = X;
  for(int i = 0; i < tamanho; i++){
    X[i] = i + ini;
  }
  return P;
}


int main(int argc, char * argv[]){
  int * X = gera_arranjo(0,10);
  int * W = gera_arranjo(10,20);
  
  printf("X = ");
  for(int i = 0; i < 11; i++){
    printf("%d , ", X[i]);
  }
  printf("\n");

  printf("W = ");
  for(int i = 0; i < 11; i++){
    printf("%d , ", W[i]);
  }
  printf("\n");
  
  int tamanho = 10000000;

  //um arranjo usando alocacaum estatica eh colocado na Stack
  //que normalmente tem alguns MB de espaco, declarando o 
  //arranjo dessa forma, na hora de usar ele estaria 
  //acessando uma memoria fora da stack e haveria uma
  //Falha de Segmentacao
  //int Y[tamanho];

  //Por isso usaremos alocacao dinamica
  int *Y = (int *) malloc(sizeof(int) * tamanho);
  printf("Y = ");
  for(int i = 0; i < tamanho; i++){
    Y[i] = i + 20;
    //printf("%d , ", Y[i]);
  }
  printf("\n");

  //Podemos usar a função calloc, que reserva memória e zera seus valores.
  //Ela pode ser ineficiente. Por que?
  
  int* A = (int*) calloc(sizeof(int), 10000);

  //Você também pode mudar o tamanho de um arranjo com o realloc.
  //Essa função exige vários cuidados, minha dica geral é evitar usa-la.

  int* XX = (int*) realloc(X, 20000 * sizeof(int));
  
  if(XX != NULL){
    X = XX;
  }  
    
  free(X);
  free(W);
  free(Y);
  free(A);
  return 0;
}