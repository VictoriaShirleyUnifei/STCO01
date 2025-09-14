#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct taluno {
    char nome[50];
    char matricula[10];
    char* curso;
};

typedef struct taluno Aluno;

int main(int argc, char * argv) {
    int a = 7;
    int* x = &a;
    int** y = &x;

    printf("%d\n", **y);

    int* Z = (int*) malloc (sizeof(int)*10);
    Z[0] = 10;
    Z[1] = 11;

    //espaço para guardar 10 endereços de inteiros
    int** W = (int*) malloc (sizeof(int*)*10);

    for(int i = 0; i < 10; i++) {
        W[i] = (int*) malloc(sizeof(int)*10);
    }

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            W[i][j] = i * j;
        }
    }

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
           printf("%4d", W[i][j]);
        }
        printf("\n");
    }

    Aluno** tabela_alunos = (Aluno**) malloc (sizeof(Aluno*) *10);

    for(int i = 0; i < 10; i++) {
        tabela_alunos[i] = (Aluno*) malloc(sizeof(Aluno) * 10);
    }

    char S[4];
    strcpy(S, "SIN");

    strcpy(tabela_alunos[0][0].nome, "Victoria");
    strcpy(tabela_alunos[0][0].matricula, "000000");
    tabela_alunos[0][0].curso = S;

    strcpy(tabela_alunos[0][1].nome, "Joao");
    strcpy(tabela_alunos[0][1].matricula, "000001");
    tabela_alunos[0][1].curso = S;

    strcpy(tabela_alunos[0][2].nome, "Julia");
    strcpy(tabela_alunos[0][2].matricula, "000002");
    tabela_alunos[0][2].curso = S;

    for(int i = 0; i < 1; i++) {
        for(int j = 0; j < 10; j++) {
           printf("Nome: %s\n", tabela_alunos[i][j].nome);
           printf("Matricula: %s\n", tabela_alunos[i][j].matricula);
           printf("Curso: %s\n\n", tabela_alunos[i][j].curso);
        }
        printf("====================\n");
    }

    return 0;
}