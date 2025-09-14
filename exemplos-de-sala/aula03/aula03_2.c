//Recursão
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//toda recursão deve ter uma caso base

int fatorial(int n) {
    if(n == 0) return 1;
    return n * fatorial(n - 1);
    // return n * magicamente obtenha (n - 1);
}

int main(int argc, char * argv) {

    printf("%d\n", fatorial(2));
    printf("%d\n", fatorial(3));
    printf("%d\n", fatorial(4));
    printf("%d\n", fatorial(5));

    return 0;
}