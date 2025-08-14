#include <stdio.h>

//argc - quantos arqumentos foram passados
//* argv[] - valores dos argumentos passados
// array, arranjo, vetor - mesma coisa

void soma_e_sub(int a, int b, int* psoma, int* psub);

int soma_vetor(int* V, int n);

int main(int argc, char * argv[] ) {

    int a = 5;
    int b = 7;
    int soma, sub;
    int* psoma = &soma;
    int* psub = &sub;

    printf("%x\n", psoma);

    soma_e_sub(a, b, psoma, psub);

    printf("Soma %d, Sub = %d\n", soma, sub);

    int Z[4];

    //Não faça isso!!!!!!!!!!
    int* pZ = Z;

    printf("Z = %x\n", Z); // %x - numero em hexadecimal
    printf("pZ = %x\n", pZ); 
    //vetor = 42; //errado - deve ser um endereço de memória, não um número
    *pZ = 42;
    pZ++;
    printf("pZ = %x\n", pZ);

    *pZ = 43;
    Z[2] = 44;
    Z[3] = 45;

    int soma_total = soma_vetor(Z, 4);

    printf("Soma vetor = %d\n", soma_total);

    return 0;
}

void soma_e_sub(int a, int b, int* psoma, int* psub) {
    int soma = a + b;
    int sub = a - b;
    *psoma = soma;
    *psub = sub;
    return;
}

int soma_vetor(int* V, int n) {
    int soma = 0;
    for(int i = 0; i < n; i++) {
        soma = soma + V[i];
    }
    return soma;
}