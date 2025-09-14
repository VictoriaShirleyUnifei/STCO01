#include <stdio.h>
#include <stdlib.h>

// struct Aluno {
//     char nome[5000];
//     char matricula[20];
//     char curso[3];
// };

// typedef struct Aluno Aluno;//apelido para struct aluno;

typedef struct Aluno {
    char nome[5000];
    char matricula[20];
    char curso[3];
} Aluno;

typedef Aluno* pAluno;//apelido para Aluno* por apontamento
typedef int numero; //apelido para struct

//a-> == (*a)
int verifica_curso(pAluno a) {
    if(a->curso[0] == 'S' && a->curso[1] == 'I' && a->curso[2] == 'N') {
        return 1;
    }
    return 0;
}

//alocação dinâmica de memória - quando se precisa de muita memória
int* gera_arranjo(int ini, int fim) {
    int tamanho = fim - ini + 1;
    int* X = (int*) malloc(sizeof(int) * tamanho); //carrega lixo de memória(risco de segurança)
   
    //malloc devolve um void*
    for(int i = 0; i < tamanho; i++) {
        X[i] = ini + i;
    }
    printf("%d %d....%d\n", X[0], X[1], X[9]); 

    return X;
}

int main(int argc, char * argv[]) {

    int* Z = gera_arranjo(0, 10);
         
    //int X[10000000];
    int* X = (int*) malloc(sizeof(int) * 10000000);
     if(X == NULL) {
        printf("ERRO, sem memoria!!");
        exit(-1);
    }

    //calloc
    // int* W = (int*) calloc(sizeof(int), 10000); //limpa a memória e preenche com zeros,
    // // porém tem problema de eficiencia

    // for(int i = 0; i < 10000; i++) {
    //     X[i] = i;
    //     W[i] = i;
    // }

    //realoc - perigoso, nao se sabe tem espaço para realocação
    //nem quanto tempo pode demorar
    // int* XX = (int*) realloc(X, 20000 * sizeof(int));

    // if(XX != NULL) {
    //     X = XX;
    // }

    // for(int i = 10000; i < 20000; i++) {
    //     X[i] = i;
    // }

    //printf("%d %d....%d\n", Z[0], Z[1], Z[9]); 

    //apelido para variável
    numero a = 5;

    // Aluno hokama;
    // hokama.curso[0] = 'S';
    // hokama.curso[1] = 'I';
    // hokama.curso[2] = 'N';

    pAluno hokama = (pAluno) malloc(sizeof(Aluno));
    hokama->curso[0] = 'S';
    hokama->curso[1] = 'I';
    hokama->curso[2] = 'N';

    if(verifica_curso(&hokama) == 1) {
        printf("Aluno eh de SIN");
    }

    free(Z); //libera memória para poder ser utilizada novamente
    free(X); 
    
    return 0;
}

// - - Forma nao recomendada - - - 
// int main(int argc, char * argv[]) {
//     int* Z = gera_arranjo(0, 10);
    
//     //int X[10000000];
//     int* X = (int*) malloc(sizeof(int) * 10000000);

//     int tam;
//     scanf("%d", &tam);
//     int Y[tam];

//     free(Z);
//     free(X);

//     return 0;
// }


//- - - Tenta acessar memória que não tem mais - - - 
// int* gera_arranjo(int ini, int fim) {
//     int tamanho = fim - ini + 1;
//     int X[tamanho];

//     for(int i = 0; i < tamanho; i++) {
//         X[i] = ini + i;

//         return X;
//     }
// }

// int main(int argc, char * argv[]) {
//     // int* X;

//     // *X = 10;

//     // printf("%d\n", *X);

//     int* Z = gera_arranjo(0, 10);

//     printf("%d %d....%d\n", Z[0], Z[1], Z[9]);
//     return 0;
// }
