#include <stdio.h>
#include <stdlib.h>

// int procura(int *V, int n, int P) {
//     for(int i = 0; i < 10; i++) {
//         if(V[i] == P) {
//             return 1;
//         }
//         if(V[i] > P) {
//             return 0;
//         }
//     }
//     return 0;
// }

int busca_binaria(int* V, int ini, int fim, int P) {
    if(fim < ini) {
        return 0;
    }

    int metade = (ini + fim) / 2;
    if(V[metade] == P) {
        return 1;
    }
    if(V[metade] < P) {
        //procurar na esquerda
        //se achar devolve 1
        return busca_binaria(V, ini, metade - 1, P);
    }
    if(V[metade] > P) {
        //procurar na direita
        //se achar devolve 1
        return busca_binaria(V, metade + 1, fim, P);
    }
    return 0; //nao vai cair nunca aqui
}

int main(int argc, char * argv[]) {
    //int V[] = {5, 3, 2, 4, 1, 6, 10, 11};
    int V[] = {1, 2, 3, 4, 5, 6, 10, 11};

    //devolve 1 se achar o valor 0 caso contrario

    //int res = procura(V, 8, 7);

    int res = busca_binaria(V, 0, 7, 3);

    if (res == 1) {
        printf("Achou!\n");
    } else {
        printf("Nao achou\n");
    }

    return 0;
}