#include <stdio.h>
#include <stdlib.h>

int fatorial_rec(int n) {
    if(n == 0) return 1;
    return n * fatorial_rec(n-1);
}

int fatorial(int n) {
    int fat = 1;
    for(int i = 1; i <= n; i++) {
        fat = fat * i;
    }
    return fat;
}

void hanoi(int n, int ori, int dest, int aux) {
    if(n == 1) {
        printf("Mova disco %d de %d para %d\n", n, ori, dest);
        return;
    }
    hanoi(n - 1, ori, aux, dest);
    printf("Mova disco %d de %d para %d\n", n, ori, dest);
    hanoi(n - 1, aux, dest, ori);
}

int main(int argc, char * argv[]) {

    hanoi(4, 1, 3, 2);
  
    return 0;
}