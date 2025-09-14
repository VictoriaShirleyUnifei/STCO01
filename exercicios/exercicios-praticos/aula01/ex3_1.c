//Verifique que a troca de valores de variáveis 
//discutida acima poderia ser obtida 
//por meio de uma macro do pré-processador:
// #define troca (X, Y) {int t = X; X = Y; Y = t;}
//. . . 
//troca (i, j);

#include <stdio.h>
#define troca(X, Y) {int t = X; X = Y; Y = t;}

int main() {
    int i = 5, j = 10;

    printf("Antes da troca: i = %d, j = %d\n", i, j);
    troca(i, j);
    printf("Depois da troca: i = %d, j = %d\n", i, j);
    
    return 0;
}

//SAIDA ESPERADA 
//Antes da troca: i = 5, j = 10
//Depois da troca: i = 10, j = 5