//Versão booleana.  
//Escreva uma função que receba x, v e n e devolva 1 se x está em v[0..n-1] e 0 em caso contrário.

int pertence(int x, int v[], int n) {
    for (int i = 0; i < n; i++) {
        if (v[i] == x) {
            return 1;
        }
    }
    return 0;
}