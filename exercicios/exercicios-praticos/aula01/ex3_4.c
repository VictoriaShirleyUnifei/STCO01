//Escreva uma função mm que receba um vetor inteiro v[0..n-1] 
//e os endereços de duas variáveis inteiras, digamos min e max, 
//e deposite nessas variáveis o valor de um elemento mínimo 
//e o valor de um elemento máximo do vetor.  
//Escreva também uma função main que use a função mm.

#include <stdio.h>

// Função que encontra mínimo e máximo em um vetor
void mm(int v[], int n, int *min, int *max) {
    *min = v[0];  // assume primeiro elemento como mínimo
    *max = v[0];  // assume primeiro elemento como máximo
    
    for (int i = 1; i < n; i++) {
        if (v[i] < *min) {
            *min = v[i];
        }
        if (v[i] > *max) {
            *max = v[i];
        }
    }
}

int main(void) {
    int v[] = {7, -3, 15, 0, 22, 5}; 
    int n = sizeof(v) / sizeof(v[0]);
    int min, max;

    mm(v, n, &min, &max);

    printf("Vetor: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    printf("Minimo = %d\n", min);
    printf("Maximo = %d\n", max);

    return 0;
}
